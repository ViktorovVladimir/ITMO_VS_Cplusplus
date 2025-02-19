/*
    Ex 04. Using a recursive function.

    In this exercise, you will recursively implement algorithms for well-known problems that you previously solved iteratively - 
    calculating the sum of numbers from 1 to any positive integer (Lesson 2, exercise 3) 
    and determining the greatest common divisor using the Euclidean algorithm (Lesson 2, exercise 2).


    Task 01: Create a new project and declare a function that implements an algorithm for calculating the sum of numbers from 1 to any positive integer n;
    Task 02: In the same project, declare a function that implements the Euclidean algorithm: determining the greatest common divisor using the operation of calculating the remainder of division.
*/


#include <iostream>
#include <string>

using namespace std;

//--.
int addNumders(int n);
int addNumders(int n1, int n2);
int gcd(int m, int n);


//#define TASK01
#define TASK02

//--.
int main()
{   

#ifdef TASK01



    //--. TASK 01:   
    /*
    int n;
    
    cout << "\nEnter the value of the number n to calculate the sum of numbers from 1 to any positive integer n: :\n";
    cin >> n;

    int iResult = addNumders(n);

    cout << "\n\nResult: " << iResult << "\n";
    */

    //--.
    //--. In the main() function, implement the input of two variables - the interval for which the sum of numbers is calculated, 
    //    numbers, a function call and display of the result.

    int n1, n2;

    cout << "\nEnter the value of the number n1, n2 to calculate the sum of numbers from n1 to any positive integer n2: :\n";
    cin >> n1;
    cin >> n2;

    int iResult = addNumders(n1, n2);

    cout << "\n\nResult: " << iResult << "\n";
#endif // TASK01


#ifdef TASK02

    //--. TASK 02:   
    /* 
        In the same project, declare a function that implements the Euclidean algorithm : 
        determining the greatest common divisor using the operation of calculating the remainder of division :
    */

    int m, n;

    cout << "\nEnter the value of the number m, n to calculate gcd function: \n";
    cin >> m;
    cin >> n;

    int iResult = gcd(m, n);

    cout << "\n\nResult: " << iResult << "\n";

#endif

    return 0;

}   

//--.
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

//--.
int addNumders(int n1, int n2)
{
    if (n2 == n1) return n2; // exit from recursion
    else return (n2 + addNumders(n1, n2 - 1));
}

//--.
int addNumders(int n)
{
    if (n == 1) return 1; // exit from recursion
    else return (n + addNumders(n - 1));
}

