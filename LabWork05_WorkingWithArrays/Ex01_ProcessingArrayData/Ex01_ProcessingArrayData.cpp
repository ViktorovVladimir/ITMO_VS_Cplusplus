/*
    Ex 01. Processing Array Data.
    
    In this exercise, you will create an array, fill it with numbers, and process the data.

*/


#include <iostream>
#include <string>

using namespace std;

//------------------------------
//--.
int main()
{
    const int n = 10;

    //--.
    int mas[n];

    //--.
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    //--.
    int s = 0;
    int iSNeg = 0, iSPos = 0;
    int iSOdd = 0, iSEven = 0;
    int iMaxValue = 0xFFFFFFFF, maxPos;
    int iMinValue = 0x7FFFFFFF, minPos;
    //--.
    for (int i = 0; i < n; i++)
    {
        //--.
        s += mas[i];

        //--.
        if (mas[i] > 0)
            iSPos += mas[i];
        if (mas[i] > 0)
            iSNeg += mas[i];

        //--.
        if (mas[i] & 1)
            iSOdd += mas[i];
        else
            iSEven += mas[i];

        //--.
        if (mas[i] > iMaxValue)
        {
            iMaxValue = mas[i];
            maxPos = i;
        }
        if (mas[i] < iMinValue)
        {
            iMinValue = mas[i];
            minPos = i;
        }

    }

    //--.
    double rAverage = s / (double) n;
    //--.
    cout << "\n" << "The sum of all array elements is equal to: " << s << "\n";
    cout << "The average sum of all array elements is equal to: " << rAverage << "\n";
    cout << "Sum of negative numbers: " << iSNeg << "\n";
    cout << "Sum of even numbers: " << iSEven << "\n";
    cout << "Sum of odd numbers: " << iSOdd << "\n";
    cout << "Max value: " << iMaxValue << " in position " << maxPos <<"\n";
    cout << "Min value: " << iMinValue << " in position " << minPos << "\n";

    //--.
    int iMulValues = 1;
    if( minPos > maxPos )
    {
        int tmp = minPos;
        minPos = maxPos;
        maxPos = tmp;
    }

    if( (maxPos - minPos) > 1 )
    {
        for (int i = minPos + 1; i < maxPos; i++)
        {
            iMulValues *= mas[i];
        }
    }

    cout << "\n The result of multiplying the values of the mass array between the max and min positions: " << iMulValues << "\n";


    return 0;
}


