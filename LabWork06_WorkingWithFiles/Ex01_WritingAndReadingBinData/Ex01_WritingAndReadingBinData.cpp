/*
    Ex 1. Writing and reading data from a binary file.

    In this exercise, you will write measurement data to a binary file, and then implement reading data from this file and calculating their sum.
*/


#include <iostream> 
#include <fstream>

using namespace std;

//--.
int main()
{
    //--.
    double sum = 0;
    int const n = 100;
    double nums[n];

    //--.
    for (int i = 0; i < n; i++)
    {
        nums[i] = (rand() % 100);

        //--.
        cout << "\nnums["<< i << "] = " << nums[i];

    }




    //--.
    ofstream out("test.bin", ios::out | ios::binary);

    //--.
    if (!out) 
    {
        cout << "The file cannot be opened\n";
        return 1;
    }

    //--.
    out.write((char*)nums, sizeof(nums));

    //--.
    out.close();

    
    ////////


    //--.
    ifstream in("test.bin", ios::in | ios::binary);
    if (!in) 
    {
        cout << "The file cannot be opened";
        return 1;
    }

    //--.
    in.read((char*)&nums, sizeof(nums));

    //--.
    int k = sizeof(nums) / sizeof(double);
    
    cout << "\n\n";
    
    //--.
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << ' ';
    }
    
    //--.
    cout << "\nsum = " << sum << endl;

    //--.
    in.close();

    
    return 0;
}
