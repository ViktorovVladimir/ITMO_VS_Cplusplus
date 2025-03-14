/*
    Ex 03. Sorting an Array.

    In this exercise, you will implement a simple algorithm for sorting array elements � selection sort.

*/


#include <iostream>
#include <string>
    
using namespace std;
    
//--.
void show_array(const int Arr[], const int N);
//--.
bool from_min(const int a, const int b);
//--.
bool from_max(const int a, const int b);
//--.
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));



//------------------------------
//--.
int main()
{   
    const int N = 10;
    
    int my_choose = 0;
    
    int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
    

    //--.
    bool (*from_f[2])(int, int) = { from_min,from_max };


    cout << "1. Sort ascending;\n";
    cout << "2. Sort in descending order.\n";
    cin >> my_choose;
    cout << "Initial data: ";
    
    
    //--.
    show_array(A, N);

    /*
    //--.
    switch (my_choose)
    {
    case 1:
        bubble_sort(A, N, from_min);
        break;
    case 2:
        bubble_sort(A, N, from_max);
        break;
    default:
        cout << "\rUnknown operation ";
    };
    */

    //--.
    bubble_sort(A, N, (*from_f[my_choose - 1]));

    //--.
    show_array(A, N);


    return 0;
}   
    
//------------------------------
//--.
void show_array(const int Arr[], const int N)
{   
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
    
    cout << "\n";
}   
    
//------------------------------
//--.
bool from_min(const int a, const int b)
{   
    return a > b;
}   
    
//------------------------------
//--.
bool from_max(const int a, const int b)
{   
    return a < b;
}   

//------------------------------
//--.
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
        }
    }
}
