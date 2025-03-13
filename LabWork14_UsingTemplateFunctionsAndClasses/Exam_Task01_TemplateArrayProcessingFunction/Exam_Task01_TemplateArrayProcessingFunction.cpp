/*
    Exam Task 1. Template array processing function.

    Write a function template that returns the arithmetic mean of all elements of an array.
    The function's arguments must be the name and size of an array (of type int).
    In the main() function, test working with arrays of int, long, double and char types.
*/


#include <iostream>

template<class T>
double average( T arr[], int size )
{
    if( size <= 0 )
    {
        return 0;
    }
    
    double sum = 0;

    for( int i = 0; i < size; i++ )
    {
        sum += arr[i];
    }

    return sum / size;
}

//------------------------------------------------------
//--.
int main()
{
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    long arrl[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";


    double res1 = average( arr, sizeof(arr) / sizeof(arr[0]) );
    std::cout << "res1 = " << res1;
    double res2 = average(arrl , sizeof(arrl) / sizeof(arrl[0]));
    std::cout << "\nres2 = " << res2;
    double res3 = average(arrd, sizeof(arrd) / sizeof(arrd[0]));
    std::cout << "\nres3 = " << res3;
    double res4 = average(arrc, sizeof(arrc) / sizeof(arrc[0]));
    std::cout << "\nres4 = " << res4;
    std::cout << "\n";
}

