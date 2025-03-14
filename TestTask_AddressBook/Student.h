#pragma once

#include "Person.h"

class Student : public Person {

public:
    //--.
    Student(const string &name, const string &phone, const string &major)
        : Person(name, phone, "Student"), major(major) 
    {
    }

    //--.
    string getInfo() const override 
    {
        return "Student: " + full_name + ", Phone: " + phone + ", Major: " + major;
    }

private:
    
    string major;
};

