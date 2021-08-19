#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// In this program you will be reading numbers from a file. You will validate the numbers and calculate the average of all of the valid numbers.
int main() {
    double numValue=0, totalValue=0, average=0, validNumbers=0, invalidNumbers=0, totalNumbers=0; //initializing my variables used for output calculations
    string numFile; //initializing string for input file name

    cout << "Enter input file name" << endl; //outputting user prompt
    cin >> numFile; //inputting file name

    ifstream input; //streaming input file
    input.open(numFile); //opening input file
    ofstream output; //streaming output file
    output.open("invalid-values.txt"); //opening output file
    if (input){ //condition if there is valid input from an input file
        cout << "Reading from file \"" << numFile << "\"" << endl; //output if file is opened and being read from properly
        while (input >> numValue){ //loop for inputting values from the file
            totalNumbers++; //counter for total number of values
            if (numValue>=0 and numValue<=105){ //condition if a value is valid
                totalValue+=numValue; //add the valid value to the running total
                validNumbers++; //counter for valid numbers
            }
            else{ //condition if the value is invalid
                output << fixed << setprecision(5) << numValue << endl; //outputting invalid numbers to invalid text document
                invalidNumbers++; //invalid number counter
            }
        }
        input.close(); //closing the input file
        output.close(); //closing output file
        average = totalValue / validNumbers; //average number calculation
        cout << "Total values: " << totalNumbers << endl; //outputting total number of values
        cout << "Invalid values: " << invalidNumbers << endl; //outputting total number of invalid values
        cout << "Valid values: " << validNumbers << endl; //outputting total number of valid values
        if (validNumbers==0) //conditional output if an average cannot be calculated
            cout << "An average cannot be calculated" << endl;
        else
            cout << "Average of valid values: " << fixed << setprecision(4) << average << endl; //output of average if it can be calculated
    }
    else{ //condition if input file can not be opened correctly
        cout << "File \"" << numFile << "\" could not be opened" << endl;
    }
}
