/*
    Ex01. Implementing selection statements. 
    
    Task 1. Determining whether a point belongs to a given figure.    
*/

#include <iostream>

using namespace std;

int main()
{
    //--.
    system("chcp 1251");
    double x, y;

    //--. You need to enter the coordinates of the point x, y;
    cout << "Enter the x, y coordinates of the point: " << "\n";
    cin >> x;
    cin >> y;
    
    //--.
    cout.precision(3);

    cout << "\n Point x=" << x << ", y=" << y;
    //--. Check and display the result
    if (x * x + y * y < 9 && y > 0)
    {
        //--. "inside"
        cout << " inside" << "\n\n";
    }
    else if (x * x + y * y > 9 || y < 0)
    {
        // "outside"
        cout << " outside" << "\n\n";
    }
    else // "on the border"
    {
        cout << " on the border" << "\n\n";
    }

}


