#pragma once

#include "Person.h"

//--.
class Teacher : public Person 
{
public:
    //--.
    Teacher( const string &name, const string &phone, const string &subject )
        : Person(name, phone, "Teacher"), subject(subject) 
    {}

    //--.
    string getInfo() const override 
    {
        return "Teacher: " + full_name + ", Phone: " + phone + ", Subject: " + subject;
    }

private:
    string subject;
};
