// TestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class A {
public:
    //--.
    A()
        : isize(0)
    {}
    //--.
    A(int in)
        : isize(in)
    {
        data.resize(in);
    }
    //--.
    int size() const
    {
        return isize;
    }
    //--.
    int& operator[](int in_index)
    {
        return data[in_index];
    }
    //--.
    const int& operator[](int in_index) const
    {
        return data[in_index];
    }

    //--.
    A& operator=(const A& other)
    {
        if (this != &other)
        {
            //--. Ќе копируем размер, так как он измен€емый
            //--.  опируем данные
            this->data = other.data;
        }
        return *this;
    }
private:
    const int isize;
    vector<int> data;
};


//----------------------------------------------
//--.
int main()
{
    A a1;
    A a2(10); //10 Ц размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }
}