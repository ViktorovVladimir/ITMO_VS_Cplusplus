/*
	Ex Exam. Task03 Working with different triangles.

	You need to write a program that calculates the area of ​​two types of triangles: equilateral and scalene.

	To solve the problem, implement overloaded functions: the first should take one parameter - 
	a side and calculate the area of ​​an equilateral triangle, the second should take three parameters - 
	the sides of a triangle to calculate the area of ​​a scalene triangle.
	Select the triangle type using a dialogue with the user.
*/

#include <iostream>
#include <string>

using namespace std;

double calcTriangleSquare(int inSide);
double calcTriangleSquare(int inSideA, int inSideB, int inSideC);

//--.
int main()
{
    double rResult;
    int iValue;


    system("chcp 1251");


    cout << "\nTo calculate the area of an equilateral triangle, press enter the number 1, to calculate the area of a scalene triangle, enter the number 2:\n";
    cin >> iValue;

    //--.
    if (iValue == 1)
    {
        int iSide;
        cout << "\nEnter the side length of an equilateral triangle:\n";
        cin >> iSide;
        rResult = calcTriangleSquare(iSide);
    }

    //--.
    if (iValue == 2)
    {
        int iSideA, iSideB, iSideC;
        cout << "\nEnter the lengths of sides A, B, C of the scalene triangle:\n";
        cin >> iSideA;
        cin >> iSideB;
        cin >> iSideC;
        rResult = calcTriangleSquare(iSideA, iSideB, iSideC);
    }

    cout.precision(3);
    cout << "\n\nThe area is : " << rResult << "\n";

}

//--.
double calcTriangleSquare(int inSide)
{   
    return (sqrt(3) / 4) * inSide * inSide;
}   

//--.
double calcTriangleSquare(int inSideA, int inSideB, int inSideC)
{
    double s = (inSideA + inSideB + inSideC) / 2;
    return sqrt(s * (s - inSideA) * (s - inSideB) * (s - inSideC));
}

