/*
    Ex 05. Implementing a dynamic array.

    Task 1. Storing results in an array.
    In the multiplication table knowledge testing program, you need to save the entered answers and then display the results on the screen.

    Task 2: Saving a result set of unknown size.
*/


//#define TASK1
#define TASK2


#ifdef TASK2
    #include <vector>
#endif


#include <iostream> 

#include <ctime>

using namespace std;




//--.
int main()
{
    srand(time(NULL));

    int a{}, b{}, c{};

    int k = 0;
    
    //--.
    const int n = 10;
    int mas[n];


#ifdef TASK2
    vector<int> v1; 
    vector<int> v2;
#endif

    
    //--.
    for (int i = 0; i < n; i++)
    {
        //--. initialization of operands with random numbers from 1 to 101
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;

        if (a * b != c)
        {
            
#ifdef TASK2
            v2.push_back(c);
#endif 
            k++; // operation "increment", similar: k = k + 1
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }

#ifdef TASK2
        else
        {
            v1.push_back(c);
        }
#endif 

    }

    //--.
    cout << "\nAll: "; 
    //--.
    for (int i = 0; i < n; i++)
    { 
        cout << mas[i] << " " << ends;
    }

    
#ifdef TASK2
    cout << "\n\nGood: "; 
    for (int i = 0; i < v1.size(); i++) 
    { 
        cout << v1[i] << " " << ends;
    }

    cout << "\n\nBad: "; 
    for (int i = 0; i < v2.size(); i++)
    { 
        cout << v2[i] << " " << ends;
    }

#endif 


    //--.
    cout << "\n\nCount error: " << k << endl;

    return 0;
}
