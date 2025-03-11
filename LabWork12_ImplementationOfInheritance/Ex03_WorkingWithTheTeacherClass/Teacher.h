#pragma once

#include "human.h"
#include <string>

using namespace std;

//--.
class teacher : public human 
{
public:
	
	//--. work_time - number of teaching hours per semester per teacher
	teacher( string last_name, string name, string second_name, unsigned int work_time ) 
		: human( last_name, name, second_name) 
	{
		this->work_time = work_time;
	}
	
	//--. obtaining the number of teaching hours
	unsigned int get_work_time()
	{
		return this->work_time;
	}

private:
	
	//--. study hours
	unsigned int work_time;

};