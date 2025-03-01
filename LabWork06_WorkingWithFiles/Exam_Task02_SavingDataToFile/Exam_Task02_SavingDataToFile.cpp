/*
    Exam Task 2. Saving data to a text file.

    In the solution to Exercise 2 of Lesson 5, create a text file and write two arrays into it: the original and the sorted one.
*/


#include <iostream>
#include <fstream>
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
    string sFileName = "sortMas.txt";
    //--.
    ofstream out(sFileName, std::ios::out);
    if (!out)
    {
        cout << "The file cannot be opened.\n";
        return 1;
    }

    //--.
    out << "Base mas:" << endl;
    //--.
    for (int i = 0; i < N; i++)
        out << a[i] << endl;
    out << "\n" << endl;



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
    out << "Sort mas:" << endl;
    //--.
    for (int i : a)
    {
        cout << i << '\t';
        out << i << endl;
    }
    out << "\n" << endl;

    //--.
    out.close();

    //--.
    cout << "\n\nData written to text file " << sFileName << "\n";


    return 0;
}
