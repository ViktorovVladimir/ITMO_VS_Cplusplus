/*
    Exam Task 03. Implementation of search algorithms using the transposition method.

    Implement a search function in an array of a given dimension of a specific element (key) using the transposition algorithm.
*/


#include <iostream> 

#include <ctime>

using namespace std;


// --.
int funcSearch(int* mas_in, int len, int skey);

//--.
int main()
{
    //--.
    int mas_buffer[] = { 1,2,3,4,5,6,7,2 };
    int len = sizeof(mas_buffer) / sizeof(mas_buffer[0]);
    int key = 7;

    //--.
    int idx = funcSearch( mas_buffer, len, key );

    //--.
    if( idx != -1 ) 
    {
        //--.
        cout << "Key " << key << " found by index " << idx << endl;
        cout << "Array after transposition: ";
        //--.
        for (int i = 0; i < len; i++) 
        {
            cout << mas_buffer[i] << " ";
        }
        cout << endl;
    }
    else 
    {
        std::cout << "Key " << key << " not found." << endl;
    }

    return 0;
}



//-----------------------------
//--.
int funcSearch( int* mas_in, int len, int skey )
{
    int ind;

    //--.
    if (len < 1)
    {
        return -1;
    }

    //--.
    for (int i = 0; i < len; i++) 
    {        
        if( mas_in[i] == skey) 
        {
            ind = i;

            if( ind == 0)
                break;
            else 
            {
                int tmp = mas_in[i];
                mas_in[i] = mas_in[i - 1];
                mas_in[i - 1] = tmp;
            }
        }
    }

    return ind;
}

