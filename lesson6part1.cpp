#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// In this program you will be outputting the characters that map to the ASCII
// codes 32 through 126. You will need a loop to iterate through the input values
// and output the corresponding character.
int main() {
    unsigned int numMin=0, numMax=0; //initializing unsigned variables

    cout << "Enter lower and upper values" << endl; //initial user prompt
    cin >> numMin >> numMax; //entering unsigned integers for the minimum and maximum
    while (numMin<32 or numMax<32 or numMin>126 or numMax>126 or numMin>numMax){ //error codes for ineligible integers
        if (numMin<32 or numMax<32 or numMin>126 or numMax>126) //if integers are outside of range
            cout << "Values must be in range 32 to 126 inclusive" << endl << "Enter lower and upper values" << endl;
        else if (numMin>numMax) //if min is > than max
            cout << "Values must be in range 32 to 126 inclusive" << endl << "Enter lower and upper values" << endl;
        cin >> numMin >> numMax;
    }
    cout << "Characters for ASCII values between " << numMin << " and " << numMax << endl; //reference output
    cout << "----+----+----+----+" << endl; //table formatting top
    for (int i=numMin; i<=numMax; i++){ //loop for outputting ASCII characters
        cout << (char)i;
        if ((i-numMin+1) % 20 == 0 and i!= numMin and i!=numMax) //formatting if statement for 20 characters a line
            cout << endl;
    }
    cout << endl << "----+----+----+----+" << endl; //table formatting bottom

}
