/*
    Ex 02. Implementation of the value exchange function.

    This exercise explores the mechanism for exchanging the values ​​of two variables using a function 
    so that changes to the parameters within the function would result in a change (exchange) of the original parameters.
    It is required to implement the ability to exchange two variables using a function.

*/


#include <iostream>
#include <string>

using namespace std;

void swap(int*, int*);

void swap(int&, int&);


//------------------------------
//--.
int main()
{
    int x = 5, y = 10;
    
    //--.
    cout << "\n\n x = " << x << ", y = " << y;

    swap(&x, &y);
    
    cout << "\n x = " << x << ", y = " << y;

    swap(x, y);

    cout << "\n x = " << x << ", y = " << y;

    return 0;
}

//------------------------------
//--.
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//------------------------------
//--.
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}


