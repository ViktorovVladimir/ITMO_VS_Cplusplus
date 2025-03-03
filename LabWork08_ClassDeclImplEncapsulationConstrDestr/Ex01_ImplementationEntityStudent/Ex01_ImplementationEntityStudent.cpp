/*
    Ex 01. Implementation of the entity – student as a class.

    In this exercise you will create a program that will track student progress.
    A student can be thought of as a class.
*/


#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;



//--------------------------------------
//--.
class Student
{

public:
    
    //--. Setting the student name
    void set_name( string student_name )
    {
        name = student_name;
    }
    
    //--.
    string get_name()
    {
        return name;
    }
    
    //--. Setting the student's last name
    void set_last_name( string student_last_name )
    {
        last_name = student_last_name;
    }
    
    //--. Getting the student's last name
    string get_last_name()
    {
        return last_name;
    }
    
    //--. Setting intermediate grades
    void set_scores(int student_scores[])
    {
        for (int i = 0; i < 5; ++i) 
        {
            scores[i] = student_scores[i];
        }
    }
    
    //--. Setting GPA
    void set_average_score(double ball)
    {
        average_score = ball;
    }
    
    //--. Getting your GPA
    double get_average_score()
    {
        return average_score;
    }
    
    private:
        int scores[5];          // Interim assessments
        double average_score;   // GPA
        string name;            // Name
        string last_name;       // Last Name
};


//--------------------------------------
//--.
int main()
{
    //--. Creating a Student class object
    Student student01;

    string name;
    string last_name;

    int scores[5];

    //--. Entering a name using the keyboard
    cout << "Name: ";
    getline(cin, name);
    //--. Entering a last name
    cout << "Last name: ";
    getline(cin, last_name);


    //--. Sum of all ratings
    int sum = 0;
    //--. Entering interim grades
    for (int i = 0; i < 5; ++i) 
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        // summation
        sum += scores[i];
    }

    //--. Saving first and last name to a Student object
    student01.set_name(name);
    student01.set_last_name(last_name);
    //--. Saving intermediate grades to an object of the Student class
    student01.set_scores(scores);

    double average_score = sum / 5.0;
    
    //--. Saving GPA to Student class object
    student01.set_average_score(average_score);

    cout << "Average ball for " << student01.get_name() << " "
        << student01.get_last_name() << " is "
        << student01.get_average_score() << endl;
    
    //--.
    return 0;
}
