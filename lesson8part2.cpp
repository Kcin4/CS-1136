#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// In part 2 you will be creating multiple functions to calculate the present value.
double readFuture(double futureValue){ // function for reading in the future value
    cout << "Enter future value" << endl; // output prompt for future value
    cin >> futureValue; // user inputting future value
    while (futureValue<=0){ // conditional loop for if the input future value is invalid
        cout << "The future value must be greater than zero" << endl; // outputting error message if the future value is invalid
        cout << "Enter future value" << endl; // outputting prompt again
        cin >> futureValue; // user inputting future value
    }
    return futureValue; // returns future value to main function
}

double readannualInterest(double annualInterest){ // reading annual interest rate function
    cout << "Enter annual interest rate" << endl; // outputting annual interest rate prompt
    cin >> annualInterest; // user inputting annual interest
    while (annualInterest<=0){ // conditional loop if value is invalid
        cout << "The annual interest rate must be greater than zero" << endl; // error message if value is invalid
        cout << "Enter annual interest rate" << endl; // prompting user again
        cin >> annualInterest; // user inputting annual interest again
    }
    annualInterest = annualInterest/100; // converting annual interest to a number
    return annualInterest; // returning interest to main function
}

double readnumberYears(double numberYears){ // function for reading in the number of years
    cout << "Enter number of years" << endl; // prompt for user to enter years
    cin >> numberYears; // user inputting years
    while (numberYears<=0){ // conditional loop if years entered is invalid
        cout << "The number of years must be greater than zero" << endl; // error message if input is invalid
        cout << "Enter number of years" << endl; // outputting prompt again
        cin >> numberYears; // inputting number of years again
    }
    return numberYears; // returning years to main function
}

double presentValue(double futureValue, double interestRate, int numberYears){ // The presentValue needs to calculate the present value and return that back to the calling function.
    // The formula used needs the future value (F) and annual interest rate (r) and the number of years (n) the money will sit in the account, unchanged. You will be calculating the present value (P).
    // P = F / ( (1 + r) ^ n)
    double prezValue=0; // variable for the return value
    prezValue = futureValue / pow(1+interestRate, numberYears); // math for present value
    return prezValue; // returning present value to main function
}

void displayFunction(double presentValue, double futureValue, double annualInterest, double numberYears){ // function to display results and inputs
    cout << "Present value: $" << fixed << setprecision(2) << presentValue << endl; // outputting present value with proper formatting
    cout << "Future value: $" << setprecision(2) << futureValue << endl; // outputting future value with proper formatting
    cout << "Annual interest rate: " << setprecision(3) << annualInterest * 100 << "%" << endl; // outputting interest rate with proper formatting
    cout << "Years: " << setprecision(0) << numberYears << endl; // outputting number of years
}
// main driver for program
int main() {
    double futValue=1, rateInterest=1, numYears=1, presValue=1; // initializing placeholder variables
    futValue = readFuture(futValue); // calling the read function for future values
    rateInterest = readannualInterest(rateInterest); // calling the interest rate function
    numYears = readnumberYears(numYears); // calling the number of years function
    presValue = presentValue(futValue, rateInterest, numYears); // calling the present value function to calculate
    displayFunction(presValue, futValue, rateInterest, numYears); // giving stored values from called functions to the display function for output
}
