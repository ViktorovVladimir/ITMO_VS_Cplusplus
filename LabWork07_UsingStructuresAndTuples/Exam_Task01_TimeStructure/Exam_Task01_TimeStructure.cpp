/*
    Exam Task 1. Time structure.

    Create a structure named Time. 
    Its three fields, which are of type int, are called hours, minutes and seconds. 
    Write a program that asks the user to enter time in hours, minutes, seconds format.
*/

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

//--.
struct Time 
{
    int hours;
    int minutes;
    int seconds;

    //--.
    int toSeconds() const 
    {
        return seconds + minutes * 60 + hours * 3600;
    }

    //--.
    Time add(const Time& in) const 
    {
        Time result;
        result.seconds = seconds + in.seconds;
        result.minutes = minutes + in.minutes + result.seconds / 60;
        result.hours = hours + in.hours + result.minutes / 60;

        result.seconds %= 60;
        result.minutes %= 60;
        return result;
    }

    //--.
    Time subtract(const Time& in) const 
    {
        Time result;
        int totalSeconds1 = toSeconds();
        int totalSeconds2 = in.toSeconds();
        int diff = totalSeconds1 - totalSeconds2;

        if( diff < 0 ) 
        {
            std::cout << "The result of subtraction is negative, return 0:00:00\n";
            return { 0, 0, 0 };
        }

        result.hours = diff / 3600;
        diff %= 3600;
        result.minutes = diff / 60;
        result.seconds = diff % 60;

        return result;
    }

};

//-------------------------------------------
//--.
bool isCorrectTime(Time &time)
{   
    //--.
    if (time.hours < 0 || time.minutes < 0 || time.minutes >= 60 || time.seconds < 0 || time.seconds >= 60)
    {
        cout << "\n\nIncorrect time.\n";
        return false;
    }

    return true;
}   
    
    
//--
int main()
{   
    Time time1, time2;

    //--.
    cout << "Enter time (hours, minutes, seconds):";
    cin >> time1.hours >> time1.minutes >> time1.seconds;
    //--.
    if( !isCorrectTime(time1) )
    {
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time1.toSeconds() << " seconds\n\n";

    
    //--.
    cout << "Enter the second time (hours, minutes, seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;
    //--.
    if( !isCorrectTime(time2) )
    {
        return 1;
    }
    //--. 
    cout << "Total number of seconds: " << time2.toSeconds() << " seconds\n\n";



    //--.
    Time sum = time1.add( time2 );
    cout << "Amount of time: " << sum.hours << " h " << sum.minutes << " min " << sum.seconds << " sec\n";

    //--.
    Time diff = time1.subtract( time2 );
    cout << "Time difference: " << diff.hours << " h " << diff.minutes << " min " << diff.seconds << " sec\n";
    

    //--.
    return 0;

}

