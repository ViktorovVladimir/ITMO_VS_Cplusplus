/*	
    Ex Exam. Task02 Applying Function Implementation Iteration.
	
	It is required to implement the function for calculating the cube root in two versions: 
	in the first, using the standard function pow(a,1.0/3), and in the second, an iterative formula.

*/	


#include <iostream>
#include <string>

using namespace std;

//--.
double cubeRoot(double a);
double cubeRoot(double x, double a);


//#define VERSION01
#define VERSION02

//--.
int main()
{

#ifdef VERSION01


    double rValue;

    cout << "\nEnter the value of the a to calculate cube root:\n";
    cin >> rValue;

    double rResult = cubeRoot(rValue);

    cout << "\n\nResult: " << rResult << "\n";
    

#endif 


#ifdef VERSION02

    double rValue;

    cout << "\nEnter the value of the a to calculate cube root:\n";
    cin >> rValue;

    double rResult = cubeRoot(rValue/3, rValue);

    cout << "\n\nResult: " << rResult << "\n";

#endif

}

//--.
double cubeRoot(double x, double a)
{
    double precision = 0.00001;
    
    double newX = x - (x * x * x - a) / (3 * x * x);

    if (abs(newX * newX * newX - a) < precision) {
        return newX;
    }
    else 
    {
        return cubeRoot(newX, a);
    }
}

//--.
double cubeRoot(double a)
{
    return pow(a, 1.0 / 3);

}

