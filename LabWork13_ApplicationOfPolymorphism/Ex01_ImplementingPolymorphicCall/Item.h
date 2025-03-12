#pragma once

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

//--.
class Item
{

private:
	string title;
	double price;
	
public:
	
	//--.
	virtual void getdata()
	{
		cout << "\nEnter title: ";
		cin.ignore();
		getline(cin, title);		
		cout << "Enter price: ";
		cin >> price;
	}
	
	//--.
	virtual void putdata()
	{
		cout << "\nåTitle: " << title;
		cout << "\nPrice: " << price;
	}

};