#pragma once

#include "Person.h"

class Colleague : public Person 
{
public:

    //--.
    Colleague( const string &name, const string &phone, const string &work_title )
        : Person(name, phone, "Colleague"), work_title(work_title) 
    {}

    //--.
    string getInfo() const override 
    {
        return "Colleague: " + full_name + ", Phone: " + phone + ", Job Title: " + work_title;
    }

private:
    string work_title;
};
