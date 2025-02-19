/*
    Exam Task 01. Calculating the roots of a quadratic equation.

    It is required to implement a function for calculating the real roots of a quadratic equation.
    - The function should return 1 if roots are found, zero if both roots match, and -1 if no roots exist.
    - The values ​​of the roots of the equations must be returned as function arguments, passed by reference.

*/


#include <iostream>
#include <string>

using namespace std;

//--.
void FuncInputValues(double &a, double &b, double &c);
int Myroot(double, double, double, double&, double&);


//------------------------------
//--.
int main()
{
    double a, b, c, x1 = 0, x2 = 0;
    int ret;

    //--. Осуществить ввод значений коэффициентов уравнения: a, b, c
    FuncInputValues(a, b, c);

    //--.
    ret = Myroot(a, b, c, x1, x2);

    //--.
    cout << "\n\n\tResults:";
    cout << "\n\t------------------";

    cout.precision(5);
    //--.
    switch (ret)
    {
    case 0:
        cout << "\nThe root of an equation with coefficients a = " << a << " , b = " << b << " , c = " << c << " is one : x1 = x2 = " << x1;
        break;
    case 1:
        cout << "\nThe roots of the equation with coefficients a = " << a <<" , b = " << b << " , c = " << c << " are equal : x1 = " << x1 <<", x2 = "<< x2;
        break;
    case -1:
        cout << "\nThere are NO roots of the equation with coefficients a = " << a <<" , b = " << b << " , c = " << c;
        break;
    }

    
    cout << "\n\n";

    return 0;
}

//------------------------------
//--.
void FuncInputValues(double &a, double &b, double &c)
{
    while (true)
    {
        cout << "Enter the value of coefficient a: ";
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input format. Please re-enter. \n";
            continue;
        }

        cout << "Enter the value of coefficient b: ";
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input format. Please re-enter. \n";
            continue;
        }
        
        cout << "Enter the value of coefficient c: ";
        cin >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input format. Please re-enter. \n";
            continue; 
        }
        break;
    }
}


//------------------------------
//--.
double discriminant(double a, double b, double c)
{
    return (double)(b * b - 4 * a * c);
}

//------------------------------
//--.
int Myroot(double a, double b, double c, double &x1, double &x2)
{
    //--.
    x1 = 0;
    x2 = 0;

    //--. Calculates the discriminant D to understand how many roots there will be
    //--. D < 0 - no roots, return -1
    //--. D = 0 - there is one root, return 0
    //--. D > 0, there are two different roots, return 1
    double D = discriminant(a, b, c);

    //--.
    if (D < 0)
    {
        return -1;
    }


    x1 = (-b + sqrt(D)) / (2 * a);
    //--.
    if (D == 0)
    {
        return 0;
    }

    //--.
    x2 = (-b - sqrt(D)) / (2 * a);
    return 1;

}
