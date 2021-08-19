#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// This program will convert a set of temperatures from Fahrenheit to Celsius and Kelvin.
int main() {
    double startTemp=0, endTemp=0, incremValue=0; //initializing temperature variables
    cin >> startTemp >> endTemp >> incremValue; //inputting variables
    while (startTemp>endTemp or incremValue<=0){ //loop for invalid variables
        cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl; //output for invalid variables
        cin >> startTemp >> endTemp >> incremValue;//reinput variables
    }
    cout << fixed << setw(18) << "Fahrenheit";//table header
    cout << fixed << setw(18) << "Celsius";
    cout << fixed << setw(18) << "Kelvin" << endl;
    for (double i=startTemp; i<=endTemp; i+=incremValue){ //loop for outputting data conversion to celsius and kelvin
        cout << fixed << setw(18) << setprecision(4) << showpoint << i; //formatting and math
        cout << fixed << setw(18) << setprecision(4) << showpoint << (i-32)/1.8;
        cout << fixed << setw(18) << setprecision(4) << showpoint << ((i-32)/1.8) + 273.15 << endl;
    }

}
