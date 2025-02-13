/*
    Ex 3. Using a loop with a (for) parameter to iterate.
*/


#include <iostream> 

#include <ctime>

using namespace std;

//--.
int main()
{   
    srand( time(NULL) ); 
    
    int a{}, b{}, c{};
    
    int k = 0, n = 10;

    for (int i = 1; i <= n; i++)
    {
        //--. initialization of operands with random numbers from 1 to 101
        a = rand() % 10 + 1; 
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";
        cin >> c;
        if (a * b != c)
        {
            k++; // operation "increment", similar: k = k + 1
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    
    cout << "Count error: " << k << endl;
    
    return 0;
}
