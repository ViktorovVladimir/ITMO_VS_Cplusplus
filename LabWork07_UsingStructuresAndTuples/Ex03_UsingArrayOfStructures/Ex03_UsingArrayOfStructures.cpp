/*
    Ex 3. Using an Array of Structures.

    In this exercise you will create an array of variables of type Distance.
*/


#include <iostream>


#include <iostream>
#include <windows.h>

using namespace std;

//--.
struct Distance
{
    int feet;
    double inches;

    //--.
    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
};


//------------------------------
//--.
Distance AddDist(const Distance& d1, const Distance& d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

//------------------------------
//--.
Distance InputDist()
{
    Distance d;
    cout << "\nEnter number of feet: ";
    cin >> d.feet;
    cout << "Enter number of inches:";
    cin >> d.inches;
    return d;
}

//------------------------------
//--.
void ShowDist(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"\n";
}


//------------------------------
//--.
int main()
{
    //--.
    int n;
    cout << "Enter the size of the distance array: ";
    cin >> n;

    //--.
    Distance* masDist = new Distance[n];

    //--.
    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }

    //--.
    for (int i = 0; i < n; i++)
    {
        ShowDist(masDist[i]);
    }

    //--.
    delete[] masDist;

    return 0;
}
