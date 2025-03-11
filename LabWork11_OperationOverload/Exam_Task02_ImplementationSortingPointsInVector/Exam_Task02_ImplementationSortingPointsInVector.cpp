/*  
    Exam Task2. Implementation of sorting points in a vector.

    Develop a Point class with two real-type fields - x and y - and a constructor with parameters, 
    as well as a function for calculating the distance to the coordinate center.
    For the Point class, implement an overload of the pass-to-output (<<) and comparison (<) operators 
    to make the following code snippet work (using the standard sorting algorithm).
*/  

#include <iostream>


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
    
    
class Point
{   
public:
    
    Point(float xin, float yin)
        : x(xin), y(yin)
    {}

    //--.
    bool operator<(const Point &in) const
    {
        return (x * x + y * y) < (in.x * in.x + in.y * in.y);
    }

    //--.
    friend std::ostream& operator<< ( std::ostream& out, const Point &p )
    {
        out << "x = " << p.x << " y = " << p.y << "\n";
        return out;
    }
    
private:    
    float x;
    float y;
};


//--.
int main()
{
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    
    std::sort(v.begin(), v.end()); // requires operator overloading < for // class Point
    
    for( auto& point : v )
        std::cout << point << '\n'; // requires operator overload << for // class Point
    
    return 0;
}