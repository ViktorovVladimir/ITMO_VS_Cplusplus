/*
    Ex 2. Using loops when implementing algorithms.

    Task 2. Using a loop with a precondition.
.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    
    while (a != b)
    {
        if (a > b)
            a -= b; // similar to the expression a = a - b
        else
            b -= a;
    }

    cout << "GCD = " << a << endl;
}
