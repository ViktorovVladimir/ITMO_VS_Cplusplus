/*
    This exercise explores how to enter text data from the keyboard and display it on the screen.
*/

#include <iostream>
#include <string>
using namespace std;
    
int main()
{   
    string sName;
    cout << "What is your name? ";
    //cin >> sName;
    getline(cin, sName);
    cout << "Hello, " << sName << "!\n";
}   

