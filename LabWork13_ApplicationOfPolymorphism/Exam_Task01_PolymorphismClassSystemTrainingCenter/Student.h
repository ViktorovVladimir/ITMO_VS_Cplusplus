#pragma once

#include "Human.h"
#include <string>
#include <vector>

using namespace std;

class Student : public Human 
{
public:
	
	//--.
	void getdata()
	{
		Human::getdata();		
		//--.
		int tmp;
		//--.
		for (int i = 0; i < 5; ++i)
		{
			cout << "Score " << i + 1 << ": ";
			cin >> tmp;
			scores.push_back(tmp);
		}
	}

	//--.
	void putdata()
	{
		cout.precision(3);
		cout << "Average scores for " << Human::get_full_name() << " " << " is " << get_average_score() << endl;
	}


private:

	//--. Obtaining a student's GPA
	float get_average_score()
	{
		//--. Total number of ratings
		unsigned int count_scores = (unsigned int)this->scores.size();
		//--. Sum of all student grades
		unsigned int sum_scores = 0;
		//--. Average score
		for (unsigned int i = 0; i < count_scores; ++i)
		{
			sum_scores += this->scores[i];
		}
		//--.
		float average_score = (float)sum_scores / (float)count_scores;
		//--.
		return average_score;
	}


	//--. Student grades
	vector<int> scores;
};