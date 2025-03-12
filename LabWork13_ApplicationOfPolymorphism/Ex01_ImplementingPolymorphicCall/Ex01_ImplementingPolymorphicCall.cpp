/*
    Ex.01 Implementing a polymorphic call 

    In this exercise, you will create a class structure and implement polymorphic function calls from derived classes. 
    The class system includes a base class Item, which stores the name and price of a storage unit, and two classes: 
    Paperbook, which records the number of pages, and AudioBook, which records the minutes of an audio file. 
    Each of the classes has a getdata() method that requests information from the user, and a putdata() method for displaying data on the screen.
*/

#include <iostream>

#include "Paperbook.h"
#include "Audiobook.h"


//--.
int main()
{
    //--.
    SetConsoleOutputCP(1251);
    Item* pubarr[100];

    int n = 0;
    char choice;
    
    //--.
    do
    {   
        //--.
        cout << "\nEnter data for a paperbook or audiobook file (p / a) ? ";
        cin >> choice;
        //--.
        if( choice == 'p' )
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        //--.
        pubarr[n++]->getdata();
        cout << "Continue (у / n) ? ";
        cin >> choice;

    }while( choice == 'y');

    //--.
    for( int j = 0; j < n; j++ ) //цикл по всем объектам
        pubarr[j]->putdata(); //вывести данные о публикации
    
    cout << endl;
    return 0;
}



