/*
    Ex 4. Calculation of the sum of numbers on a given interval
*/


#include <iostream> 

using namespace std;

//--.
int main()
{
    int s{};
    int k = 2;
    int m = 101;


    for (int i = 1; i <= 100; i++)
    {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }

    cout << "\n\n" << "sum: " << s << "\n\n";

    return 0;
}


