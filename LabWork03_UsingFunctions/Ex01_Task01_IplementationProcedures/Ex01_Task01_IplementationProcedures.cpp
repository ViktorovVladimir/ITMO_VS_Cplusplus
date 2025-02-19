/*
    Ex 01. Using a function when organizing a program.

    In this exercise, you will create a new function to better organize your program.



*/


#include <iostream>
#include <string>

using namespace std;


void privet(string name);


int main()
{
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << name << ", " << "hello!" << endl;

    privet(name);

    return 0;
}

void privet(string name)
{
    cout << name << ", " << "hello!" << endl;
}
