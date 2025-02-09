/*
    This exercise requires you to write a program that calculates area of ​​an equilateral triangle whose perimeter is known
*/

#include <iostream>
using namespace std;

double Square(double& p_in);

int main()
{   
    system("chcp 1251");
    double rP, rS;
    cout << "Enter the perimeter of an equilateral triangle\n";
    cin >> rP;
        
    //--.
    rS = Square(rP); 

    //--. output the result to the screen
    cout.precision(3);
    
    
    //--.
    cout << "\tSide of a triangle \t" << "\tSquare of a triangle \n";
    cout << "\t      " << rP/3 << "\t\t\t\t\t" << rS;

    return 0;
}   

//----------
//--.
double Square(double &p_in)
{
    double p = p_in / 2; //semiperimeter
    double rLen = p_in / 3;

    //cout << p << "\n" << rLen;

    double t = p * (p - rLen) * (p - rLen) * (p - rLen);

    //cout << t << "\n";

    double res = sqrt(t);

    //cout << res << "\n";

    return res;
}
