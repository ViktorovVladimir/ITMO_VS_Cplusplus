/*
    Ex03. Using a template function to work with a tuple of any size.

    In this exercise, you will use variadic templates that can take a variable number of arguments to solve the problem of universalizing the print function.
*/

#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

//--.
template<class Tuple, std::size_t N>
struct TuplePrinter 
{
    static void print( const Tuple& t )
    {
        TuplePrinter<Tuple, N - 1>::print(t);
        cout << ", " << get<N - 1>(t);
    }
};

//--.
template<class Tuple>
struct TuplePrinter<Tuple, 1> 
{
    static void print( const Tuple& t )
    {
        cout << get<0>(t);
    }
};

//--.
template<class... Args>
void printTuple(const tuple<Args...>& t)
{
    cout << "(";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    cout << ")" << endl;
}

//--.
int main()
{
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<float> v3 = { (float)1.1, (float)2.2, (float)3.3, (float)4.4, (float)5.5, (float)6.6 };
    
    auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
    auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v3[1]);
    
    

    printTuple(t1);
    printTuple(t2);
    
    return 0;
}