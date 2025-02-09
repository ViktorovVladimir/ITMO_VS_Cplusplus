/*
    In this exercise, you will learn about entering and displaying numeric data on the keyboard, as well as data type conversion.
*/


#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    string sName;
    cout << "Enter your name\n";
    double a, b;
    cout << "Enter the value of variables a and b:\n";
    cin >> a; //entering the value of the variable "a" from the keyboard
    cin >> sName;
    cin >> b; //entering the value of the variable "b" from the keyboard
    double x = a / b; //calculating "x" value
    cout.precision(3);
    cout << "\nx = " << x << endl; //output the result to the screen
    cout << sizeof(a / b) << endl << sizeof(x) << endl;
    cout << "Hello, " << sName << "!\n";

    return 0;
}


