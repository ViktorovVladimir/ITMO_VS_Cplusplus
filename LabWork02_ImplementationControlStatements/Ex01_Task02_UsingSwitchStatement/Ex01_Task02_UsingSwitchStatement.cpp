/*
    Ex01. Implementing selection statements.
    
    Task 2. Using the switch statement when implementing a choice.
*/

#include <iostream>

using namespace std;


int main()
{
    char op;

    cout << "Make your choice, build your dream car: ";
    cin >> op;

    /*
    switch (op)
    {
    case 'S':
        cout << "The radio must play;\n";
        cout << "Round wheels;\n";
        cout << "Powerful engine.\n";
        break;
    case 'V':
        cout << "I want air conditioning;\n";
        cout << "The radio must play;\n";
        cout << "Round wheels;\n";
        cout << "Powerful engine.\n";
        break;
    default:
        cout << "Round wheels;\n";
        cout << "Powerful engine.\n";
    }
    */

    switch (op)
    {
    case 'V':
        cout << "I want air conditioning;\n";
    case 'S':
        cout << "The radio must play;\n";
    default:
        cout << "Round wheels;\n";
        cout << "Powerful engine.\n";
    }

}

