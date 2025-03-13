#pragma once

#include <string>
#include "Student.h"

#include <list>
#include <algorithm>
#include <set>

using namespace std;

class Group
{
private:
	string name;
	//list <Student> masSt;
	//list <Student>::iterator iter;
	multiset<Student*, compareStudent> masSt;
	multiset<Student*, compareStudent>::iterator iter;

public:
	Group(string name);
	Group();

	void setName(string newName);
	string getName();

	//--.
	int getSize();
	void addStudent(Student* newStudent);
	void delStudent(Student* oldStudent);
	Student* findStudent(string searchName, string searchLastName);
	//void GroupSort();
	void GroupOut();

};