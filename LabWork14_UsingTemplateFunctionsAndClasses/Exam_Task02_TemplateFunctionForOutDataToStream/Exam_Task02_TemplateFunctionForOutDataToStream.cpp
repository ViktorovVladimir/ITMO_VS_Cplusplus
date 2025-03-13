/*
    Exam Task 2. Template function for outputting data to a stream.

    It is required to implement a template function Print, which outputs the elements of the passed container 
    to the std::cout stream using the separator string specified as a parameter.
*/


#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

//-------------------------------------------------------
//--
template <typename T>
void Print(const vector<T>& data, string str) 
{
    //--.
    for( int i = 0; i < data.size(); i++) 
    {
        //--.
        cout << data[i];
        //--.
        if( i + 1 < data.size() ) 
            cout << str;
    }
    cout << endl;
}

//-------------------------------------------------------
//--
int main()
{
    //--.
    vector<int> data = { 1, 2, 3 };
    //--.
    Print( data, ", "); // output: 1, 2, 3
}


