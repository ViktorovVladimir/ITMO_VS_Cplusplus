/*
	Ex Exam. Task04 Recursive series sum function.

	Develop a recursive function to calculate the sum of a series
	S = 5 + 10 + 15 + … + 5 n,
	for n > 0.
*/

#include <iostream>
#include <string>

using namespace std;

//--.
int addNumbers(int n);

//--.
int main()
{
    int n;

    cout << "\nEnter the value of the number n to calculate the sum of numbers:\n";
    cin >> n;

    int iResult = addNumbers(n);

    cout << "\n\nResult: " << iResult << "\n";

    return 0;
}

//--.
int addNumbers(int n)
{
    if (n == 1) return 5; // exit from recursion
    else return (n*5 + addNumbers(n - 1));
}

