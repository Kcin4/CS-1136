#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// In this program you will be reading in the number of seconds and then calculating how far sound can travel in a specified medium in that many seconds.
int main() {
    unsigned int menu=0; //initializing variables
    double seconds=0;

    cout << "Select the medium that sound is traveling through:" << endl; //menu output
    cout << "1 Carbon Dioxide" << endl;
    cout << "2 Air" << endl;
    cout << "3 Helium" << endl;
    cout << "4 Hydrogen" << endl;
    cin >> menu;
    if(menu<1 or menu>4) //error for invalid menu input
        cout << "The menu value is invalid. Please run the program again." << endl;
    else if(menu==1){ //carbon dioxide menu option
        cout << "Enter time (in seconds)" << endl; //inputting time sound is travelling
        cin >> seconds;
        if(seconds<0 or seconds>=30) //invalid time input message
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        else{ //math for determining travel distance and outputting
            cout << "Carbon Dioxide: " << fixed << setprecision(3) << seconds << " seconds" << endl;
            cout << "Traveled " << fixed << setprecision(4) << seconds * 258.0 << " meters" << endl;
        }
    }
    else if(menu==2){ //air menu option
        cout << "Enter time (in seconds)" << endl;
        cin >> seconds;
        if(seconds<0 or seconds>=30)
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        else{
            cout << "Air: " << fixed << setprecision(3) << seconds << " seconds" << endl;
            cout << "Traveled " << fixed << setprecision(4) << seconds * 331.5 << " meters" << endl;
        }
    }
    else if(menu==3){ //helium menu option
        cout << "Enter time (in seconds)" << endl;
        cin >> seconds;
        if(seconds<0 or seconds>=30)
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        else{
            cout << "Helium: " << fixed << setprecision(3) << seconds << " seconds" << endl;
            cout << "Traveled " << fixed << setprecision(4) << seconds * 972.0 << " meters" << endl;
        }
    }
    else if(menu==4){//hydrogen menu option
        cout << "Enter time (in seconds)" << endl;
        cin >> seconds;
        if(seconds<0 or seconds>=30)
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        else{
            cout << "Hydrogen: " << fixed << setprecision(3) << seconds << " seconds" << endl;
            cout << "Traveled " << fixed << setprecision(4) << seconds * 1270.0 << " meters" << endl;
        }
    }
}
