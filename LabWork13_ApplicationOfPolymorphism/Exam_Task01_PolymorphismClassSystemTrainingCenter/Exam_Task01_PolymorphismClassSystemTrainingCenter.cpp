/*
    Exam Task1. Polymorphism in the class system of the training center.

    It is required to implement a polymorphic call to methods of derived classes 
    of the system described in the exercises of the previous practical lesson.
*/

#include <iostream>

#include "Student.h"
#include "Teacher.h"


int main()
{
    //--.
    SetConsoleOutputCP(1251);
    Human* pubarr[100];

    int n = 0;
    char choice;

    //--.
    do
    {
        //--.
        cout << "\nEnter data for a Student or Teacher file (s / t) ? ";
        cin >> choice;
        //--.
        if (choice == 's')
            pubarr[n] = new Student;
        else
            pubarr[n] = new Teacher;
        //--.
        pubarr[n++]->getdata();
        cout << "Continue (y / n) ? ";
        cin >> choice;

    } while (choice == 'y');

    //--.
    for( int j = 0; j < n; j++ )
        pubarr[j]->putdata();

    cout << endl;
    return 0;
}

