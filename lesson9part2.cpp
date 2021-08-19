#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

// In this lab we are going to be calculating the future value.
// You will need to read in the present value, the monthly interest rate and the number of months for the investment.
// The formula is going to compute compounded interest (by month).

double futureValue(double presentValue, double interestRate, int months); // function prototypes
int read(ifstream &input, double presentValue, double interestRate, int numMonths);
void display(ofstream &output, double futureValue, double presentValue, double interestRate, int numMonths);
// main function
int main() {
    double presentValue=0, interestRate=0, futValue=0, readTest; // initializing variables
    int numMonths=0;
    string inFile;

    cout << "Enter input file name" << endl; // prompting input file name
    cin >> inFile; // user inputting file name

    ifstream input; //streaming input file
    input.open(inFile); //opening input file
    if (input){ // condition if input file opens
        ofstream output; // streaming output file
        output.open("output.xls"); // opening output file
        if (output){ // condition if output file opens
            output << "Future Value\tPresent Value\tMonthly Interest\tMonths" << endl; // outputting headers
            while(input >> presentValue >> interestRate >> numMonths){ // loop for data being inputted
                readTest = read(input, presentValue, interestRate, numMonths); // test value to check which conditional branch to follow for processing data
                if (readTest == 1){ // condition if read value is 1
                    interestRate/=100; // math for proper interest rate calculation
                    futValue = futureValue(presentValue, interestRate, numMonths); // calling future value function for math
                    display(output, futValue, presentValue, interestRate, numMonths); // calling display function to output data
                }
                else if (readTest == 2){ // condition if read value is 2
                    cout << fixed << setprecision(2) << presentValue << " " << setprecision(3) << interestRate << " " << numMonths << endl; // outputting invalid value set
                    cout << "One or more of the above values are not greater than zero" << endl; // error message
                }
                else if (readTest == 0) // condition if no more input values
                    break;
            }
        }
        else{ // condition if output file could not be opened
            cout << "File output.xls could not be opened" << endl; // error message
            input.close(); // closes input file
        }
        input.close(); // closes input file
        output.close(); // closes output file
    }
    else //condition if input file can not be opened correctly
        cout << "File \"" << inFile << "\" could not be opened" << endl; // error message
}
// future value function math
double futureValue(double presentValue, double interestRate, int months){ // initializing function
    double futValue=0; // initializing value for return
    futValue = presentValue * pow((1+interestRate), months); // math for return value
    return futValue; // returns value
}
// read function
int read(ifstream &input, double presentValue, double interestRate, int numMonths){ // initializing read function
    unsigned int test; // initializing return value
    if (presentValue>0 && interestRate>0 && numMonths>0) // condition if all values are valid
        test = 1;
    else if (presentValue<=0 or interestRate<=0 or numMonths<=0) // condition if an invalid value exists
        test = 2;
    else // condition if no more values
        test = 0;
    return test; // returns test value
}
// display function
void display(ofstream &output, double futureValue, double presentValue, double interestRate, int numMonths){ // initializing parameters
    output << fixed << setprecision(2) << futureValue << "\t" << presentValue << "\t" << setprecision(3) << interestRate * 100 << "\t" << numMonths << endl; // output formatting to xls file
}

