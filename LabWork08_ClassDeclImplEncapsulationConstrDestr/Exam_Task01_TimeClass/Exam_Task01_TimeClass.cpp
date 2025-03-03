/*
    Exam  Task 01. Time Class.

    
*/

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

#include "Time.h"

using namespace std;



//-------------------------------
//--.
int main()
{
    Time *time1, *time2;
    int tmpH, tmpM, tmpS;

    //--.
    cout << "Enter time (hours, minutes, seconds):";
    cin >> tmpH >> tmpM >> tmpS;
    time1 = new Time(tmpH, tmpM, tmpS);
    //--.
    if( !time1->isCorrectTime() )
    {
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time1->toSeconds() << " seconds\n\n";


    //--.
    cout << "Enter the second time (hours, minutes, seconds): ";
    cin >> tmpH >> tmpM >> tmpS;
    time2 = new Time(tmpH, tmpM, tmpS);
    //--.
    if( !time2->isCorrectTime() )
    {
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time2->toSeconds() << " seconds\n\n";



    //--.
    Time *sum = time1->add( time2 );
    cout << "Amount of time: " << sum->getHours() << " h " << sum->getMinutes() << " min " << sum->getSeconds() << " sec\n";
    cout << "Amount of time: " << sum->getTime() << " \n";


    //--.
    delete sum;
    delete time1;
    delete time2;

    //--.
    return 0;
}

