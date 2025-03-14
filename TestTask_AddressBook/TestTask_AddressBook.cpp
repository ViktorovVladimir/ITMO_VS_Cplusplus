/*
    Test task. "Address Book"
        
    It is necessary to create an application that allows you to record data about people (name, phone number, occupation, etc.).
    Required:
        - implement a class hierarchy:
            + there should be an abstract class (for example, Person or Human) with general methods (think about which ones yourself), 
              derived classes that model, for example, the following entities (occupation): student, teacher, work colleague, etc;
            + apply an association relationship (composition or aggregation) between objects (think about which ones yourself);
        - implement recording of people in a collection (type at the discretion of the developer) and saving it to a file;
        - implement the interaction interface in a separate class.
    Required:
        - to implement classes, use GoF templates in cases where it is useful.
*/

#include <iostream>

#include "Interface.h"

//------------------------------------------------------------
//--.
int main()
{
    Interface interface;
    //--.
    interface.run();
    //--.
    return 0;
}

