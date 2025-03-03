#pragma once

#include <string>
#include <fstream>

using namespace std;

class Student
{
public:
    //--.
    Student(string name, string last_name);
    ~Student();

    //--. Setting the student name
    void set_name(string student_name);
    string get_name();
    //--. Setting the student's last name
    void set_last_name(string student_last_name);
    //--. Getting the student's last name
    string get_last_name();
    //--. Setting intermediate grades
    void set_scores(int student_scores[]);
    //--. Setting GPA
    void set_average_score(double ball);
    //--. Getting your GPA
    double get_average_score();
    //--. Recording student data to a file
    void save(string filename);


private:
    int scores[5];          // Interim assessments
    double average_score;   // GPA
    string name;            // Name
    string last_name;       // Last Name
};

