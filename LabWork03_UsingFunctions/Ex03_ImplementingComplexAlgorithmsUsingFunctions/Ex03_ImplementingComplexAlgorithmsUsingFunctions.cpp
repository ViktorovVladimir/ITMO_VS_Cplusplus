/*
    Ex 03. Implementing complex algorithms using functions.

    In this exercise, you implement a binary search algorithm as a function to calculate the root of a given power.
*/

#include <iostream>
#include <string>

using namespace std;

long double firBinSearch(double a, int n);

//--.
int main()
{   
    system("chcp 1251");

    double a;
    int n;

    //--.
    cout << "Enter a real number greater than or equal to 1, not greater than 1000, specified to 6 decimal places,   a :\n";
    cout << "Enter a natural number not exceeding 10,   a :\n";
    cin >> a;
    cin >> n;

    //--.
    long double rRes = firBinSearch(a, n);
    
    //--.
    cout.precision(3);
    
    //--.
    cout << "\n\nresult = " << rRes << endl;
        
    return 0;
}

//--------------------------
//--.
long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}
