#pragma once


#include "Item.h"

//--.
class Paperbook : public Item
{

private:

	int pages;

public:

	//--.
	void getdata()
	{
		Item::getdata();
		cout << "Enter number of pages : ";
		cin >> pages;
	}
	
	//--.
	void putdata()
	{
		Item::putdata();
		cout << "\nNumber of pages: " << pages;
	}
};