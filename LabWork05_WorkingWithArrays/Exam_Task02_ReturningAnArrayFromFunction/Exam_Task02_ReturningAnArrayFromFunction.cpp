/*
    Exam Task 02. Returning an array from a function.

*/


#include <iostream> 

#include <ctime>

using namespace std;


// --.
int* max_vect( int len, int *mas_a, int *mas_b );


//--.
int main()
{
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };

    int kc = sizeof(a) / sizeof(a[0]); //Number of array elements
    
    int* c; //Pointer to the resulting array
    
    c = max_vect(kc, a, b); //calling a function to create an array
    
    for (int i = 0; i < kc; i++) //Output of the result
        cout << c[i] << " ";
    
    cout << endl;
    
    delete[]c; //Возврат памяти.
}

//-----------------------------
//--.
int* max_vect(int len, int* mas_a, int* mas_b)
{
    int *mas_res = new int [len];
    
    //--.
    for (int i = 0; i < len; i++)
        mas_a[i] > mas_b[i] ? mas_res[i] = mas_a[i] : mas_res[i] = mas_b[i];

    //--.
    return mas_res;
}