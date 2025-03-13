// app03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Point 
{
public:
    //--.
    Point()
        :x(0), y(0)
    {
    }
    //--.
    Point(int inx, int iny)
        :x(inx), y(iny)
    {}
    //--.
    Point operator+(const Point& other) const
    {
        return { this->x + other.x , this->y + other.y };
    }
    //--.
    Point& operator+=(const Point& other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    //--.
    Point operator+(const int in) const
    {
        return Point(this->x + in, this->y + in);
    }

private:    
    int x, y;


};


int main()
{
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt2 += pt1;
    pt3 = pt1 + 5;
}

