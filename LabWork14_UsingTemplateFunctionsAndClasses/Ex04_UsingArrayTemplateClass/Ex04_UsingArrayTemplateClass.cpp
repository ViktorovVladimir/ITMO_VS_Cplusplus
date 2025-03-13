/*
    Ex04. Using the Array Template Class.

    In this exercise, you will create a template class based on an array class that has methods 
    for calculating the sum and average of the values ​​stored in an array of ints.

*/



#include <iostream>
#include "array.h"


//------------------------------------------------------------------
//--.
int main()
{
    array<int, long> numbers(100);
    array<float, float> values(200);

    int i;
    
    //--.
    for (i = 0; i < 50; i++) 
        numbers.add_value(i);
    
    //--.
    numbers.show_array();
    
    //--.
    std::cout << "Sum = " << numbers.sum() << std::endl;
    std::cout << "Average = " << numbers.average_value() << std::endl;
    
    //--.
    for (i = 0; i < 100; i++) 
        values.add_value(i * 100);
    
    //--.
    values.show_array();

    //--.
    std::cout << "Sum = " << values.sum() << std::endl;
    std::cout << "Average = " << values.average_value() << std::endl;

}

