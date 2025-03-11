#pragma once
	
using namespace std;
#include <iostream>


class Distance
{	
private:
	//const float MTF;
	float MTF;
	
	
	int feet;
	float inches;
	

public:
	
	//--. default constructor
	Distance() 
		: feet(0), inches(0.0), MTF(3.280833F)
	{ }

	//--. constructor with two parameters
	Distance(int ft, float in) 
		: MTF(3.280833F)
	{	
		//--.
		setValues(ft, in);
	}

	//--.
	Distance( float meters ) 
		: MTF(3.280833F)
	{
		float rFeet = MTF * meters;		// ������� � ����
		feet = int (rFeet);				// ����� ������ �����
		inches = 12 * ( rFeet - feet );	// ������� - ��� �����
	}
	
	float getInches() const
	{
		return inches;
	}
	int getFeet() const
	{
		return feet;
	}

	//--.
	void setValues(int ft, float in)
	{	
		//--.
		feet = ft;
		//--.
		inches = in;
		//--.
		if( inches >= 12.0 )
		{
			inches -= 12.0;
			feet++;
		}
	}	
		
	//--.
	void getdist()
	{	
		cout << "\nEnter number of feet : ";
		cin >> feet;
		cout << "Enter number of inches : ";
		cin >> inches;

		//--.
		setValues(feet, inches);
	}	
		
	//--.
	void showdist() const
	{	
		cout << feet <<  "\' - " << inches << "\"";
	}	

	//--.
	float toInches() const
	{
		return inches + feet * 12;
	}
	
	//--.
	Distance operator+ ( const Distance& ) const;
	//--.
	Distance operator- (const Distance& d2) const;
	//--.	
	Distance operator+(double value) const;
    //(double + Distance)
	friend Distance operator+(double value, const Distance& d2) {
		return d2 + value;
	}


	//--.
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	



	//--.
	friend ostream& operator<< (ostream& out, const Distance& dist);

};	