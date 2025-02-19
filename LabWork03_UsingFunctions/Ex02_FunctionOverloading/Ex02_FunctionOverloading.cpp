/*
    Ex 02. Function overloading.

    In this exercise, you use the function overloading mechanism. 
    Function overloading requires defining functions with the same name that differ in the number of parameters and/or their type.

*/

#include <iostream>
#include <string>

using namespace std;


string privet(string name);
void privet(string name, int k);

//-----------------
//--.
int main()
{
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << name << ", " << "hello!" << endl;

    //--.
    string nameOut = privet(name);

    cout << "\n\n" << nameOut << "\n\n";


    int k;

    cout << "Input number:" << endl;
    cin >> k;
    
    //--.
    privet(name, k);


    return 0;
}

//-----------------
//--.
string privet(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}

//-----------------
//--.
void privet(string name, int k)
{
    cout << name << ", " << "hello! " << "you input " << k << endl;
}