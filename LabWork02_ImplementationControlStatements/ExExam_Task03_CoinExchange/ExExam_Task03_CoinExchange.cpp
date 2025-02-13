/*
    Ex Exam. Coin Exchange.

    The Russian monetary system is well known. 
    It is required to produce a set of coins with the smallest possible number of coins. 
    Each number from the set can be used as many times as you like.
    To solve this problem, it is recommended to use a greedy algorithm.

    help site: https://ru.wikipedia.org/wiki/%D0%96%D0%B0%D0%B4%D0%BD%D1%8B%D0%B9_%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC
*/

#include <iostream> 

using namespace std;

//--.

int main()
{
    const int N = 4;
    int coins [N] = {50, 10, 5, 1};
    int count_coins[N] = {0, 0, 0};
    
    int curCoin = 24;


    cout << "\n\nEnter the amount to be exchanged: "; 
    cin >> curCoin;


    //--.
    for( int i= 0; i < N; i++ )
    {
        count_coins[i] = curCoin / coins[i];
        curCoin = curCoin % coins[i];
    }

    cout << "\n\n";
    for (int i = 0; i < N; i++)
    {
        cout << "coin " << coins[i] << " - " << count_coins[i] << " pcs \n";
    }
    cout << "\n\n";

}
