// Ex03_WorkingWithTheTeacherClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "human.h"
#include "teacher.h"


//--.
int main()
{
	unsigned int teacher_work_time = 40;

	//--.
	teacher* tch = new teacher("Sergeev", "Dmitriy", "Sergeevich", teacher_work_time);

	//--.
	cout << tch->get_full_name() << endl;
	cout << "Number of hours: " << tch->get_work_time() << endl;

	//--.
	delete tch;

	return 0;
}

