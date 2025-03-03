/*
    Exam Task 2. Solving a quadratic equation.

    Create a structure - a solution to a quadratic equation, containing two real fields - the roots of the quadratic equation.
    Implement a solution to a quadratic equation using a function that returns a structure type variable - 
    the solution to this equation with fields - the roots of the equation.
*/


#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

//--.
struct SolvQuadraticEq
{
    SolvQuadraticEq()
        : x1(0), x2(0), state(0) {}

    double x1;
    double x2;
    int state;
};

//--.
void FuncInputValues(double& a, double& b, double& c);
//--.
SolvQuadraticEq Myroot(double a, double b, double c);


//--
int main()
{
    double a, b, c;
    SolvQuadraticEq solv;

    //--. Enter the values ​​of the equation coefficients: a, b, c
    FuncInputValues(a, b, c);

    //--.
    solv = Myroot(a, b, c);

    //--.
    cout << "\n\n\tResults:";
    cout << "\n\t------------------";

    cout.precision(5);
    //--.
    switch( solv.state )
    {
    case 0:
        cout << "\nThe root of an equation with coefficients a = " << a << " , b = " << b << " , c = " << c << " is one : x1 = x2 = " << solv.x1;
        break;
    case 1:
        cout << "\nThe roots of the equation with coefficients a = " << a << " , b = " << b << " , c = " << c << " are equal : x1 = " << solv.x1 << ", x2 = " << solv.x2;
        break;
    case -1:
        cout << "\nThere are NO roots of the equation with coefficients a = " << a << " , b = " << b << " , c = " << c;
        break;
    }


    cout << "\n\n";

    //--.
    return 0;
}


//------------------------------
//--.
void FuncInputValues(double& a, double& b, double& c)
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
SolvQuadraticEq Myroot(double a, double b, double c)
{
    //--.
    SolvQuadraticEq res;

    //--. Calculates the discriminant D to understand how many roots there will be
    //--. D < 0 - no roots, return -1
    //--. D = 0 - there is one root, return 0
    //--. D > 0, there are two different roots, return 1
    double D = discriminant(a, b, c);

    //--.
    if (D < 0)
    {
        res.state = -1;
        return res;
    }


    res.x1 = (-b + sqrt(D)) / (2 * a);
    //--.
    if (D == 0)
    {
        res.state = 0;
        return res;
    }

    //--.
    res.x2 = (-b - sqrt(D)) / (2 * a);

    res.state = 1;
    return res;
}
