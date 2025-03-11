/*
    Ex 2. Creating a student object.

    In this exercise, you will test the student class by creating a class object in the main.cpp file, 
    storing his first name, last name, middle name, and list of grades in it.
*/

#include <iostream>
#include "Student.h"


//---------------------------------------------------------
//--.
int main()
{
    //--. Student grades
    std::vector<int> scores;
    
    //--. Adding student grades to a vector
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    //--.
    student* stud = new student( "Petrov", "Ivan", "Alekseevich", scores );

    //--.
    std::cout << stud->get_full_name() << std::endl;

    cout.precision(3);

    //--.
    std::cout << "Average score: " << stud->get_average_score() << std::endl;


    delete stud;

    return 0;
}
