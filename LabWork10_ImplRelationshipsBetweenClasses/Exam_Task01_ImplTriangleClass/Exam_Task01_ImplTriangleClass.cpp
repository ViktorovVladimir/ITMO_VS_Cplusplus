/*
    Exam  Task 01. Implementation of the Triangle class.

    This task requires you to create a Triangle class defined by three points - objects of the corresponding Dot class.


    Option "Composition" (the whole is responsible for the life cycle of the part)
*/

#include <iostream>
#include "Dot.h"
#include "TriangleComposition.h"
#include "TriangleAgregation.h"

//--.
int main()
{
    Dot p[3];
    int x, y;
    
    //for test point1: 2, -5
    //for test point2: -6, 1
    //for test point2: 6, -2
    //--.
    for( int i = 0; i < 3; i++ )
    {
        //--.
        cout << "Enter the x, y value for point number " << i + 1 << " \n";
        cin >> x;
        cin >> y;
        p[i].setXY(x, y);
    }

    //--.
    try
    {
        //--.
        TriangleComposition tComp(p[0], p[1], p[2]);
        //--.
        TriangleAgregation tAgr(p[0], p[1], p[2]);

        
        cout.precision(5);

        //--.
        cout << "TriangleComposition: \n";
        cout << "- the perimeter of the triangle is : " << tComp.getPerimetr() << " \n";
        cout << "- the area of the triangle is : " << tComp.getSquare() << " \n";

        //--.
        cout << "TriangleAgregation: \n";
        cout << "- the perimeter of the triangle is : " << tAgr.getPerimetr() << " \n";
        cout << "- the area of the triangle is : " << tAgr.getSquare() << " \n";
    }
    catch (ExValidTriangle& error)
    {
        cout << "ERROR: ";
        error.printMessage();
        //--.
        return 1;
    }


    
    
    //Console.WriteLine("\tПлощадь треуголиника равна  {0:F2}", sqRes);
    //Console.WriteLine("\tСтороны треугольника равны: сторона 1 =  {0:F2}, сторона 2 =  {1:F2}, сторона 3 =  {2:F2}", side1Len, side2Len, side3Len);

    
    // Отображаем треугольник
    ///tComp.display();


    return 0;
}

