#pragma once


#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <fstream>
#include <sstream>

#include "Person.h"

using namespace std;

//--.
class ContactBook 
{
public:
    
    //--.
    ~ContactBook()
    {
        for( auto ptr : contacts)
        {
            delete ptr;
        }
    }

    //--.
    void addContact( Person *person ) 
    {
        contacts.push_back( person );
    }

    //--.
    void showContacts() const 
    {
        for( auto ptr : contacts ) 
        {
            cout << ptr->getInfo() << endl;
        }
    }

    //--.
    void saveToFile( const string &filename ) const 
    {
        ofstream file(filename);        
        //--.
        for( auto ptr : contacts ) 
        {
            file << ptr->getInfo() << endl;
        }
        file.close();
    }

    //--.
    void loadFromFile( const string &filename ) 
    {
        ifstream file(filename);
        string sLine;
        
        while( getline(file, sLine) )
        {
            cout << "Loaded: " << sLine << endl;
        }
        file.close();
    }

private:    
    vector< Person* > contacts;
};
