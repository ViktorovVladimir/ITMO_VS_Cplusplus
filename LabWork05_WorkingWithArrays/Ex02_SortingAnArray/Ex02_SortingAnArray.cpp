/*
    Ex 02. Sorting an Array.

    In this exercise, you will implement a simple algorithm for sorting array elements — selection sort.

*/


#include <iostream>
#include <string>

using namespace std;

//------------------------------
//--.
int main()
{
    const int N = 10;

    //--.
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    //--.
    int min = 0;
    int buf = 0;

    for (int i = 0; i < N; i++)
    {
        //--. number of the current cell, as the cell with the minimum value
        min = i; 
        
        //--. in the loop we find the real number of the cell with the minimum value
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        
        //--. rearrangement of this element, swapping its places with the current one
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    //--.
    for (int i : a)
        cout << i << '\t';


    return 0;
}
