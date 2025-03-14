#pragma once

#include <string>

using namespace std;

class Person 
{   
public:
    virtual ~Person() = default;
    virtual string getInfo() const = 0;

protected:
    string full_name;
    string phone;
    string occupation;

    Person( string name, string phone, string occupation )
        :  full_name( name ), phone( phone ), occupation( occupation ) 
    {}
};
