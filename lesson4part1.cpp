#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// this program is to determine the weight of an item on different planets and output if they are light or heavy.
int main() {
    double mass=0, weight=0; //initializing mass and weight
    const double gravEarth=9.81, gravMoon=1.62, gravVenus=8.87; //initializing the constant accelerations of the planets

    cout << "Enter the mass in kg" << endl; //inputting the mass
    cin >> mass;

    cout << "The mass is ";
    cout << fixed << setprecision(4) << mass << " kg" << endl; //entering formatting for outputs as well as mass
        if(mass<=0)
            cout << "The mass must be greater than zero" << endl;
        else if(mass>0){

    cout << setw(8) << left << "Location"; //entering table heading
    cout << setw(14) << right << "Weight (N)" << endl;

    cout << setw(8) << left << "Earth"; //outputting the weights on each planets from given mass
    cout << setw(14) << right << mass * gravEarth << endl;

    cout << setw(8) << left << "Moon";
    cout << setw(14) << right << mass * gravMoon << endl;

    cout << setw(8) << left << "Venus";
    cout << setw(14) << right << mass * gravVenus << endl;

    weight = mass * gravEarth; //calculating weight variable

    if(weight>1500) //determining if the object is heavy or light
        cout << "The object is heavy" << endl;
    else if(weight<5)
        cout << "The object is light" << endl;
        }
}
