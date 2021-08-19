#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
//the purpose of this program is determine how long a certain amount of seconds is with the smallest possible amount of time periods
int main() {

    long long int secondsTotal=0, minutes=0, hours=0, days=0; //initializing variables with long long

    cout << "Enter seconds" << endl; //outputting prompt
    cin >> secondsTotal; //inputting # of seconds
    cout << "Total seconds: " << secondsTotal << endl; //outputting previous input
    cout << "\n";// formatting
    if(secondsTotal<=0) //error if seconds is less than 0
        cout << "Total seconds must be greater than zero" << endl;
    else if(secondsTotal>0){
        days = floor(secondsTotal / 86400); //calculating minimum days
        secondsTotal = secondsTotal % 86400; //calculating left over seconds
        if(days>0)
            cout << days << " day(s)" << endl; //outputting # of days
        hours = floor(secondsTotal / 3600); //calculating minimum hours
        secondsTotal = secondsTotal % 3600;
        if(hours>0)
            cout << hours << " hour(s)" << endl; //outputting # of hours
        minutes = floor(secondsTotal / 60); //calculating minimum minutes
        secondsTotal = secondsTotal % 60;
        if(minutes>0)
            cout << minutes << " minute(s)" << endl; //outputting # of minutes
        if(secondsTotal>0)
            cout << secondsTotal << " second(s)" << endl; // outputting # of seconds
    }


}
