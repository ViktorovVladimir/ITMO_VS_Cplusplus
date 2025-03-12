#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <windows.h>


using namespace std;

class Human 
{
public:
	
	
	//--.
	virtual void getdata()
	{
		//--. Entering a name using the keyboard
		cout << "Name: ";
		cin.ignore();
		getline(cin, name);

		//--. Entering a last name
		cout << "Last name: ";
		getline(cin, last_name);

		//--. Entering a second name
		cout << "Second name: ";
		getline(cin, second_name);
	}

	//--.
	virtual void putdata()
	{

	}

	//--. Obtaining a person's full name
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}


private:


	string name;			
	string last_name;		
	string second_name;	
};