#pragma once


#include "ContactBook.h"

class Interface 
{
public:
    
    //--.
    void run();

private:
        
    //--.
    ContactBook contactBook;
    
    //--.
    void addPerson();
    //--. 
    void saveContacts();
    //--.
    void loadContacts();
};

