/*
    Exam Task 01. Passing an array to a function.

    Implement the functionality you created in Exercises 1 and 2 as corresponding functions that will accept an array and return the required results.
    The function must take two parameters: an integer value - the size of the array and the array itself.
*/


#include <iostream> 

#include <ctime>

using namespace std;

//--.
struct result_st
{
    result_st()
        :s(0), iSNeg(0), iSPos(0), iSOdd(0), iSEven(0),
        iMaxValue(0xFFFFFFFF), iMinValue(0x7FFFFFFF),
        iMulValues(1) {}
    int s;
    int iSNeg;
    int iSPos;
    int iSOdd;
    int iSEven;
    int iMaxValue;
    int maxPos;
    int iMinValue;
    int minPos;
    int iMulValues;
    double rAverage;
};


// --.
result_st functionTask1(int* mas, int len);
// --.
void functionTask2(int* mas, int len);


//--.
int main()
{


    const int n = 10;
    //--.
    int mas[n];

    //
    result_st res1;

    //--.
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    //--.
    res1 = functionTask1( mas, n );


    //--.
    cout << "\n\nTASK1 results:\n";

    cout << "\n" << "The sum of all array elements is equal to: " << res1.s << "\n";
    cout << "The average sum of all array elements is equal to: " << res1.rAverage << "\n";
    cout << "Sum of negative numbers: " << res1.iSNeg << "\n";
    cout << "Sum of even numbers: " << res1.iSEven << "\n";
    cout << "Sum of odd numbers: " << res1.iSOdd << "\n";
    cout << "Max value: " << res1.iMaxValue << " in position " << res1.maxPos << "\n";
    cout << "Min value: " << res1.iMinValue << " in position " << res1.minPos << "\n";
    cout << "\n The result of multiplying the values of the mass array between the max and min positions: " << res1.iMulValues << "\n";



    //--.

    functionTask2(mas, n);


    //--.
    cout << "\n\nTASK2 results:\n";

    //--.
    for (int i : mas)
        cout << i << '\t';


    return 0;
}


//-----------------------------
//--.
result_st functionTask1(int* mas, int len)
{
    result_st res;
    
    //--.
    for (int i = 0; i < len; i++)
    {
        //--.
        res.s += mas[i];

        //--.
        if (mas[i] > 0)
            res.iSPos += mas[i];
        if (mas[i] > 0)
            res.iSNeg += mas[i];

        //--.
        if (mas[i] & 1)
            res.iSOdd += mas[i];
        else
            res.iSEven += mas[i];

        //--.
        if (mas[i] > res.iMaxValue)
        {
            res.iMaxValue = mas[i];
            res.maxPos = i;
        }
        if (mas[i] < res.iMinValue)
        {
            res.iMinValue = mas[i];
            res.minPos = i;
        }

    }

    //--.
    res.rAverage = res.s / (double)len;

    //--.
    if (res.minPos > res.maxPos)
    {
        int tmp = res.minPos;
        res.minPos = res.maxPos;
        res.maxPos = tmp;
    }

    if ((res.maxPos - res.minPos) > 1)
    {
        for (int i = res.minPos + 1; i < res.maxPos; i++)
        {
            res.iMulValues *= mas[i];
        }
    }

    //--.
    return res;
}

//-----------------------------
//--.
void functionTask2(int *a, int N)
{

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
}
