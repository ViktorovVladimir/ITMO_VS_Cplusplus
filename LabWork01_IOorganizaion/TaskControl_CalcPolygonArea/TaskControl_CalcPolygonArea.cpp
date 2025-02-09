/*
    A convex pentagon is defined on the Cartesian coordinate plane using vertex coordinates.
    You need to write a program to calculate the area of ​​a given pentagon.

    Test site: https://ru.wikipedia.org/wiki/%D0%A4%D0%BE%D1%80%D0%BC%D1%83%D0%BB%D0%B0_%D0%BF%D0%BB%D0%BE%D1%89%D0%B0%D0%B4%D0%B8_%D0%93%D0%B0%D1%83%D1%81%D1%81%D0%B0
*/


#include <iostream>
using namespace std;

struct point {
    double x, y;
    point()
        : x(0), y(0)
    {}
};

double Square(point *p_in);

//--.
int main()
{   
    system("chcp 1251");
    point p[5];
    
    for( int i = 0; i < 5; i++)
    {
        cout << "Enter coordinate x,y point " << i+1 << "\n";
        cin >> p[i].x;
        cin >> p[i].y;
    }
    //--.
    double rS = Square(p);

    //--. output the result to the screen
    cout.precision(3);
    //--.
    cout << "\n The area of the polygon is " << rS << "\n\n";

    return 0;

}

//----------
//--.
double Square(point *in)
{
    double rS = 0;
    for(int i = 0; i < 5; i++)
    {
        rS += in[i].x * in[(i + 1)%5].y;
        rS -= in[i].y * in[(i + 1)%5].x;
    }

    if (rS < 0)
        rS = -rS;

    return rS / 2;
}
