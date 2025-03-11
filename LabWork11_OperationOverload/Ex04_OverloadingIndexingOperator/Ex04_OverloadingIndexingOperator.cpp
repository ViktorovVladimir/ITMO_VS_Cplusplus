/*  
    Ex.04 Overloading the Indexing Operator

    In this exercise, you will implement indexing operator overloading. 
    The indexing operator is one of the operators that must be overloaded through a class member function. 
    The [ ] operator overload function will always take one parameter: the index value (the element to be accessed).
*/  


#include <iostream>
#include "GradeMap.h"


//--.
int main()
{
    GradeMap grades;

    grades["John"] = 'A';
    grades["Martin"] = 'B';
    cout << "John has a grade of " << grades["John"] << endl;
    cout << "Martin has a grade of " << grades["Martin"] << endl;
    cout << "New name and grade?" << endl;
    string name;
    char grade;
    cin >> name >> grade;
    grades[name] = grade;
    
    cout << name << " has a grade of " << grades[name] << endl;
    
    return 0;
}

