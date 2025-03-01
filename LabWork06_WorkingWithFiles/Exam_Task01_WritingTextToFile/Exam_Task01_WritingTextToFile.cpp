/*
    Exam Task 1. Writing text to a file.

    You need to write a program to write a short poem from the keyboard into a text file.
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//--.
int main() 
{
    string sFileName = "text.txt";
    
    system("chcp 1251");

    //--.
    ofstream out(sFileName, std::ios::out);
    if (!out) 
    {
        cout << "The file cannot be opened.\n";
        return 1;
    }

    //--.
    string sText;
    cout << "Enter any text (enter 'EXIT' to complete entry):\n";

    //--.
    while (true) 
    {
        //--.
        getline(cin, sText);
        //--.
        if( sText == "EXIT") 
        {
            break;
        }
        out << sText << endl;
    }

    //--.
    out.close();
    
    //--.
    cout << "The entered text was successfully written to the file " << sFileName << "\n";
    
    return 0;
}

