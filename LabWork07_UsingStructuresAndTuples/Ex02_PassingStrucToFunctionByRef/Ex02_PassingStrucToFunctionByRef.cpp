/*
    Ex 2. Passing a structure to a function by reference.

    In this exercise you will change the type of passing a structure variable to a function.
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
Distance AddDist(const Distance &d1, const Distance &d2)
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
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };
    Distance d3 = AddDist(d1, d2);

    //ShowDist(d1);
    //ShowDist(d2);
    //ShowDist(d3);

    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();

    return 0;
}
