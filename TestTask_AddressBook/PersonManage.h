#pragma once

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Colleague.h"
#include <iostream>

//--.
class PersonManage 
{
public:
    
    //--.
    static Person* createPerson( const string &occupation, const string &name, const string &phone, const string &extra ) 
    {
        Person *ptr = NULL;
        
        //--.
        if( occupation == "student" || occupation == "st")
        {
            ptr = new Student(name, phone, extra);
        }
        else if( occupation == "teacher" || occupation == "te" ) 
        {
            ptr = new Teacher(name, phone, extra);
        }
        else if( occupation == "colleague" || occupation == "co"  ) 
        {
            ptr = new Colleague(name, phone, extra);
        }
        else 
        {
            throw invalid_argument("Unknown occupation");
        }
        
        //--.
        return ptr;
    }
};
