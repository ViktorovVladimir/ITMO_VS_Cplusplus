/*
    Ex 02. Safe division in a loop.

    In this exercise, you implement a safe function call in a loop. 
    In the event that a function parameter takes on a “dangerous” value, 
    the try block will intercept the exception, pass it to the handler, and then the program will continue its execution..

*/

#include <iostream>

#include "DivideByZeroError.h"


//----------------------------
//--.
float quotient(int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();

    return (float)numl / num2;
}

//----------------------------
//--.
int main()
{
    int number1;

    //--.
    cout << "Enter the numerator value:\n";
    cin >> number1;

    //--.
    for( int i = -10; i < 10; i++ )
    {
        //--.
        try
        {
            //--.
            float result = quotient(number1, i);
            //--.
            cout << "The result of division is " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ERROR: ";

            error.printMessage();

            return 1; // program termination on error 
        }
    }

    //--.
    return 0; // normal program termination    
}
