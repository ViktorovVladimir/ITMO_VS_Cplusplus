/*
    Ex Exam. Checking SNILS number.
    
    It is required to implement an algorithm that takes a string of characters as input and returns True if the number is valid, and False otherwise
*/

#include <iostream> 

using namespace std;


bool isSnilsValid(const char* in, unsigned int len);


int main()
{
    //string sSnils = "9 1 1 2 1 2 2 1 2  55";
    string sSnils = "497-027-153 09";

    //--.
    bool bRes = isSnilsValid( sSnils.c_str(), sSnils.length() );

    //--.
    cout << (bRes ? "\ntrue\n" : "\nfalse\n");


    return 0;
}


bool isSnilsValid(const char *in, unsigned int len)
{
    int count = 9;
    int iCurSum = 0, iCheckSum;
    int iCurCheckSum = 0;

    for( int i=0; i<len; i++ )    
    {       
        switch (in[i])
        {
        case ' ':
        case '-':
            break;
        default:

            int cur = in[i] - '0';

            if (count)
            {
                iCurSum += (cur * count);
                count--;
            }
            else
            {
                iCurCheckSum = iCurCheckSum * 10 + cur;
            }
            break;
        };    
    }   
    

    if (iCurSum < 100)
        iCheckSum = iCurSum;
    else if (iCurSum < 102)
        iCheckSum = 0;
    else
    {
        iCheckSum = iCurSum %101;
        if (iCheckSum == 100)
            iCheckSum = 0;

    }

    return iCheckSum == iCurCheckSum ? true : false;
}
