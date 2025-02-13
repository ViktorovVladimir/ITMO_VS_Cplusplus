/*
    Ex 2. Using loops when implementing algorithms.

    Task 3. Comparison of loop types.
*/


#include <iostream>

using namespace std;

//--.
void task01_with_precondition();
void task02_with_postcondition();


//--.
int main()
{   
    int iValue{};

    cout << "Enter \"1\" to call task1 and \"2\" to call task2: "; cin >> iValue;

    
    
    switch (iValue)
    {
    case 1:
        task01_with_precondition();
        break;
    case 2:
        task02_with_postcondition();
        break;
    }

}

//--.
void task01_with_precondition()
{
    double x, x1, x2, y;

    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;

    cout << "\tx\tsin(x)\n";

    x = x1;

    while (x <= x2)
    {
        y = sin(x);

        cout << "\t" << x << "\t" << y << endl;

        x = x + 0.01;
    }
}

//--.
void task02_with_postcondition()
{
    int a, b, temp;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    do
    {
        if (a > b)
            a -= b; // similar to the expression a = a - b
        else
            b -= a;
    } while (a != b);

    cout << "GCD = " << a << endl;
}
