/*
    Ex 01. Using a function when organizing a program.

    In this exercise, you will create a new function to better organize your program.

    Task02: 


*/

#include <iostream>
#include <string>

using namespace std;


string privet(string name);


int main()
{
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << name << ", " << "hello!" << endl;

    string nameOut = privet(name);

    cout << "\n\n" << nameOut << "\n\n";

    return 0;
}

string privet(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}
