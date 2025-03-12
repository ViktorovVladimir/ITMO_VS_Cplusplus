#pragma once

#include "Human.h"
#include <string>

using namespace std;

//--.
class Teacher : public Human 
{
public:
	
	//--.
	void getdata()
	{
		Human::getdata();
		cout << "Enter the number of teaching hours for the teacher: ";
		cin >> work_time;
	}

	//--.
	void putdata()
	{
		cout << Human::get_full_name() << " " << "Number of hours: " << work_time << endl;
	}

private:

	//--. study hours
	unsigned int work_time;

};