/*
    Ex Exam. Definition of superprime.
    
    You need to implement an algorithm that checks whether a number is super simple. Justify the data types used in the algorithm.
*/

#include <iostream> 

using namespace std;

//--.
bool isSuperPrime(int in);

//--.
int main()
{
    int value = 237;

    bool bPrime = isSuperPrime(value);

    cout << "\n\nValue " << value << " is super prime " << (bPrime ? "true" : "false") << " .\n\n";
}


//--.
bool isSuperPrime(int in)
{
    while(in > 0) 
    {
        switch ( in%10 )
        {
        case 2:
        case 3:
        case 5:
        case 7:
            break;
            
        default:
            return false;
            break;
        };

        in /= 10;
    }
    return true;
}