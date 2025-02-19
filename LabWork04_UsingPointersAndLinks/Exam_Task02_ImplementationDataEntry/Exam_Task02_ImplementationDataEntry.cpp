/*
    Exam Task 01. Calculating the roots of a quadratic equation.

    It is required to implement a function for calculating the real roots of a quadratic equation.
    - The function should return 1 if roots are found, zero if both roots match, and -1 if no roots exist.
    - The values ​​of the roots of the equations must be returned as function arguments, passed by reference.

*/


#include <iostream>
#include <string>

using namespace std;

//--.
bool Input(int& a, int& b);


//------------------------------
//--.
int main()
{

    int a, b;
    
    if( Input(a, b) == false ) // if(!Input(a,b))
    {
        cerr << "\nerror\n";
        return 1;
    }
    int s = a + b;
    
    cout << "\n Result " << s << "\n";
    
    return 0;
}

//------------------------------
//--.
bool Input(int& a, int& b)
{
    while (true)
    {
        cout << "Enter the value of coefficient a: ";
        cin >> a;
        if (cin.fail()) {
            return false;
        }

        cout << "Enter the value of coefficient b: ";
        cin >> b;
        if (cin.fail()) {
            return false;            
        }
        break;
    }
    return true;
}