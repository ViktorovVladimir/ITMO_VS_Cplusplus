/*
    Ex.03 Overloading operators of different types of operands

    In this exercise, implement an overload of binary addition and subtraction operators to work with operands of different types, 
    such as adding (subtracting) a distance object and a real value, by writing two functions for the operation, 
    for example, dist + 2,8 and 2,8 + dist, one for each case.
*/



#include <iostream>
#include "Distance.h"



//--.
int main()
{
    Distance dist1, dist2, dist3, dist4, dist5;

    dist1.getdist();
    dist2.getdist();

    //--.
    dist3 = dist1 + dist2;
    //
    dist5 = dist1 - dist2;
    //--.
    dist4 = dist1 + dist2 + dist3;

    //--.
    cout << "\ndist1 = ";
    //dist1.showdist();
    cout << "\ndist1 = " << dist1;

    //--.
    cout << "\ndist2 = ";
    //dist2.showdist();
    cout << "\ndist2 = " << dist2;

    //--.
    cout << "\ndist3 = ";
    //dist3.showdist();
    cout << "\ndist3 = " << dist3;

    //--.
    cout << "\ndist4 = ";
    //dist4.showdist();
    cout << "\ndist4 = " << dist4;

    //--.
    cout << "\ndist5 = ";
    //dist5.showdist();
    cout << "\ndist5 = " << dist5;


    cout << "\n";


    //--.
    float mtrs;
    //--.
    Distance ddist1 = 2.35F;
    //--.
    mtrs = static_cast<float>(ddist1);
    //--.
    cout << "\nmtrs = static_cast<float>(dist1): " << mtrs;

    //--.
    mtrs = dist2;
    //--.
    cout << "\nmtrs = dist: " << mtrs;

    dist4 = dist2 + 1.1;
    dist5 = 1.1 + dist2;

    //--.
    cout << "\ndist4 = dist2 + 1.1 : " << dist4;
    //--.
    cout << "\ndist5 = 1.1 + dist2 : " << dist5;


    cout << "\n";

}
