#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

// Your program will calculate the distance an object travels (in meters) on Earth for a specified number of seconds.
// You will also calculate the distance traveled on the Moon (in meters) for the specified number of seconds.

double readSeconds(double inSeconds=0){ // The readSeconds function will be an input function that will read in a double value from cin and return that value back to main.
    cout << "Enter the time (in seconds)" << endl; // outputting prompt
    cin >> inSeconds; // user inputs seconds
    if (inSeconds<0) // condition for if input seconds is less than 0
        cout << "The time must be zero or more" << endl; // error message if condition is met
    return inSeconds;
}

double calculateEarthDistance(double seconds){
// The calculateEarthDistance function will calculate the distance an object falls (on Earth) during the specified number of seconds.
    double earthDistance=0, earthGravity=9.80; // initializing earth distance and gravity variable
    earthDistance = 0.5 * earthGravity * pow(seconds, 2); // formula for determining earth distance
    return earthDistance; // returns value to main
}

double calculateMoonDistance(double seconds){
// The calculateMoonDistance function will calculate the distance an object falls (on the Moon) during the specified number of seconds.
    double moonDistance=0, moonGravity=1.60; // initializing moon distance and gravity variable
    moonDistance = 0.5 * moonGravity * pow(seconds, 2); // formula for determine moon distance
    return moonDistance; // returns moon distance to main
}

void displayResults(double seconds, double earthDistance, double moonDistance){
// The displayResults function that will display the number of seconds an object has fallen as well as
// the distance the object has fallen on the Earth and on the Moon.
// The displayResults function MUST NOT call readSeconds, calculateEarthDistance, or calculateMoonDistance.
    cout << fixed << setprecision(4) << "The object traveled " << earthDistance << " meters in " << setprecision(2) << seconds << " seconds on Earth" << endl; // outputting earth distance and seconds
    cout << fixed << setprecision(4) << "The object traveled " << moonDistance << " meters in " << setprecision(2) << seconds << " seconds on the Moon" << endl; // outputting moon distance and seconds
}

int main() {
    double seconds=1, earthDistance=0, moonDistance=0; // initializing variables for seconds and distances
        while (seconds!=0){ // loop for user prompts and terminates when user enters 0
            seconds = readSeconds(); // calls readSeconds function
            if (seconds>0){ // condition for if seconds are valid
                earthDistance = calculateEarthDistance(seconds); // calls all mathematical functions
                moonDistance = calculateMoonDistance(seconds);
                displayResults(seconds, earthDistance, moonDistance); // calls display functions
            }
        }
}
