
#include "Interface.h"
#include "PersonManage.h"

#include <iostream>

using namespace std;

//-------------------------------------------------------------
//--.
void Interface::run()
{
    //--.    
    while( true ) 
    {
        cout << "Hello! Please make a choice:\n";
        cout << "----------------------------\n";
        cout << "1. Add person\n2. Show contacts\n3. Save contacts to file\n4. Load contacts from filr\n5. Exit\n";
        int key;
        cin >> key;
        cin.ignore();

        //--.
        switch( key )
        {
        case 1:
            addPerson();
            break;
        case 2:
            contactBook.showContacts();
            break;
        case 3:
            saveContacts();
            break;
        case 4:
            loadContacts();
            break;
        case 5:
            cout << "See you later alligator." << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }    
}

//-------------------------------------------------------------
//--.
void Interface::addPerson() 
{
    string sName, sPhone, sOccupation, sExtraInfo;

    //--.
    cout << "Enter full name: ";
    getline(cin, sName);
    cout << "Enter phone: ";
    getline(cin, sPhone);
    cout << "Enter occupation (student/teacher/colleague): ";
    getline(cin, sOccupation);
    cout << "Enter additional info (major/subject/work title): ";
    getline(cin, sExtraInfo);

    //--.
    try 
    {
        Person *person = PersonManage::createPerson( sOccupation, sName, sPhone, sExtraInfo );
        contactBook.addContact( person );
        cout << "Contact added." << endl;
    }
    catch( const invalid_argument &e ) 
    {
        cout << e.what() << std::endl;
    }
}

//-------------------------------------------------------------
//--.
void Interface::saveContacts()
{
    string sFilename;
    cout << "Enter filename to save: ";
    getline(cin, sFilename);
    contactBook.saveToFile(sFilename);
    cout << "All contacts saved." << endl;
}

//-------------------------------------------------------------
//--.
void Interface::loadContacts()
{
    string sFilename;
    cout << "Enter filename to load: ";
    getline(std::cin, sFilename);
    contactBook.loadFromFile(sFilename);
    cout << "Contacts loaded." << endl;
}

