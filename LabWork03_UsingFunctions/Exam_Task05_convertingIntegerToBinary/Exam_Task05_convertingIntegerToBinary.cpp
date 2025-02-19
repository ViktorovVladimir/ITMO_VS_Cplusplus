/*  
    Ex Exam. Task05 Using recursion to convert an integer to binary.
    
    You need to write a recursive function for converting a positive integer from the decimal number system to the binary system.
    Classic translation algorithm: you need to divide the input parameter num by 2 until num>0. 
    For each division, you need to select the remainder using the expression num%2.
*/

#include <iostream>
#include <string>

using namespace std;

//--.
string toBinary(int n, int pos );

//--.
int main()
{
    int n;

    cout << "\nEnter the value of the number n to calculate binary code:\n";
    cin >> n;

    string sResult = toBinary(n, 32);

    cout << "\n\nResult: " << sResult << "\n";

    return 0;
}

//--.
string toBinary(int n, int pos)
{   
    
    pos--;
    string res = (n & (1 << pos)) ? "1" : "0";
    if (pos == 0) return res; // exit from recursion
    else return res + toBinary(n, pos);
}   

