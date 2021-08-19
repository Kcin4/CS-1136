#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// You will be calculating the number of seconds it will take for sound to travel though a medium. The values you will use are as follows:
int main() {
    unsigned int menu=0; //initializing variables
    double distance=0;

    cout << "Select the medium that sound is traveling through:" << endl; //menu output
    cout << "1 Air" << endl;
    cout << "2 Water" << endl;
    cout << "3 Steel" << endl;
    cin >> menu; //inputting menu option
    if(menu<1 or menu>3){
        cout << "The menu value is invalid. Please run the program again." << endl; //error for invalid menu option
    }
    switch(menu){ //start of switch function
case 1: //case 1 for air
    cout << "Enter distance (in feet)" << endl;
    cin >> distance;
    if(distance<=0) //error message if invalid distance
        cout << "The distance must be greater than zero" << endl;
    else{
        cout << "Air: " << fixed << setprecision(4) << distance << " ft" << endl; //outputting distance again.
        cout << "Traveled for " << distance / 1100 << " seconds" << endl; //math to determine number of seconds travelled.
    }
    break;
case 2: //case 2 for water
    cout << "Enter distance (in feet)" << endl;
    cin >> distance;
    if(distance<=0)
        cout << "The distance must be greater than zero" << endl;
    else{
        cout << "Water: " << fixed << setprecision(4) << distance << " ft" << endl;
        cout << "Traveled for " << distance / 4900 << " seconds" << endl;
    }
    break;
case 3: //case 3 for steel
    cout << "Enter distance (in feet)" << endl;
    cin >> distance;
    if(distance<=0)
        cout << "The distance must be greater than zero" << endl;
    else{
        cout << "Steel: " << fixed << setprecision(4) << distance << " ft" << endl;
        cout << "Traveled for " << distance / 16400 << " seconds" << endl;
    }
    break;
    }
}
