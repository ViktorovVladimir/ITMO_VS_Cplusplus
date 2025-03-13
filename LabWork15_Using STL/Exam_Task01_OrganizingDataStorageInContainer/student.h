#pragma once 

#include "IdCard.h"
#include <string>

using namespace std;



//---------------------------------
//--.
class Student
{

public:
	// ����������� ������ Student
    Student(string, string, IdCard*);
	Student(string, string);

    // ��������� ����� ��������
    void set_name(string);
    // ��������� ����� ��������
    string get_name();
    // ��������� ������� ��������
    void set_last_name(string);
    // ��������� ������� ��������
    string get_last_name();
    // ��������� ������������� ������
    void set_scores(int []);
    // ��������� �������� �����
    void set_average_score(double);
    // ��������� �������� �����
    double get_average_score();
	
    //--.
	void display() const; 

	void setIdCard(IdCard *c);
	IdCard getIdCard();

    //----------------------------------------------------------------------
    //--.
    friend bool operator== (const Student& p1, const Student& p2)
    {
        return (p1.name == p2.name && p1.last_name == p2.last_name) ? true : false;
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator< (const Student& p1, const Student& p2)
    {
        if (p1.last_name == p2.last_name)
            return (p1.name < p2.name) ? true : false;
        return (p1.last_name < p2.last_name) ? true : false;
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator!= (Student& p1, Student& p2)
    {
        return !(p1 == p2);
    }

    //----------------------------------------------------------------------
    //--.
    friend bool operator> (Student& p1, Student& p2)
    {
        return !(p1 < p2) && !(p2 == p2);
    }
private:
        // ������������� ������
        int scores[5];
        // ������� ����
        double average_score;
        // ���
        string name;
        // �������
        string last_name;
		// ��������
		IdCard *iCard;
		
};


//---------------------------------
//--.
class compareStudent
{
public:
    bool operator()(const Student* ptrSt1, const Student* ptrSt2) const
    {
        //--.
        if( ptrSt1 == nullptr || ptrSt2 == nullptr )
        {
            return ptrSt1 != nullptr;
        }
        //--.
        return *ptrSt1 < *ptrSt2;
    }
};
