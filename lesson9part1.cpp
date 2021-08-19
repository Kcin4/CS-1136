#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;

// This lab lesson you are writing a program for the hypothetical Acme Wholesale Copper Wire Company.
// The Acme company sells spools of copper wiring for $104 each. Write a program that displays the status of an order.

double read(int &spoolOrdered, int &spoolStocked, string special); // function prototypes
void display(int spoolOrdered, int spoolStocked, double shipping);
void display(int spoolOrdered, int spoolStocked, double shipping);

// simple main function
int main() {

    int spoolOrdered=0, spoolStocked=0; // initializing variables
    double shipHandling=0;
    string special;

    shipHandling = read(spoolOrdered, spoolStocked, special); // passing values to read function for proper responses and values
    display(spoolOrdered, spoolStocked, shipHandling); // passing values to display function to display


}
// read function
double read(int &spoolOrdered, int &spoolStocked, string special){ // initializing pass by references to main function variables

    double shipping=0; // initializing return variable for shipping
    cout << "Spools to be ordered" << endl; // prompt for user spool order amount
    cin >> spoolOrdered; // inputting order amount
    while (spoolOrdered<1){ // error loop for if spools ordered is invalid
        cout << "Spools order must be 1 or more" << endl; // error message
        cout << "Spools to be ordered" << endl; // re prompting user
        cin >> spoolOrdered; // re inputting valid value
    }
    cout << "Spools in stock" << endl; // prompt for amount of spools in stock
    cin >> spoolStocked; // inputting number of spools in stock
    while (spoolStocked<0){ // error loop if number of spools in stock is invalid
        cout << "Spools in stock must be 0 or more" << endl; // error message
        cout << "Spools in stock" << endl; // re prompting
        cin >> spoolStocked; // re inputting valid stocked number
    }
    cout << "Special shipping and handling (y or n)" << endl; // prompt if special shipping and handling amount
    cin >> special; // inputting response
    if (special=="y"){ // if response is yes
        cout << "Shipping and handling amount" << endl; // prompt to input special shipping charge
        cin >> shipping; // inputting shipping charge
        while (shipping<0){ // error loop if shipping charge is invalid
            cout << "The spool shipping and handling charge must be 0.0 or more" << endl; // error message
            cout << "Shipping and handling amount" << endl; // re prompt
            cin >> shipping; // re inputting valid shipping amount
        }
    }
    if (special!="y"){ // if the user response is not "y"
        shipping = 12.99; // shipping charge is defaulted to 12.99
    }
    return shipping; // returns shipping charge
}
// display function
void display(int spoolOrdered, int spoolStocked, double shipping){ // initializing given variables

    int spoolReady=0, spoolBack=0; // initializing variables for spools that will be ready to ship and spools that will be on back order
    if (spoolOrdered<=spoolStocked) // if the users order can be fully fulfilled
        spoolReady = spoolOrdered; // spools that are ready to ship are the same as the number ordered
    else{ // if not
        spoolReady = spoolStocked; // spools that will be ready will be all that are left in stock
        spoolBack = spoolOrdered - spoolStocked; // spools on back order math
    }
    cout << "Spools ready to ship: " << spoolReady << endl; // outputting spools that are ready to ship
    cout << "Spools on back-order: " << spoolBack << endl; // outputting spools on back order
    double subtotal = spoolReady * 104, shippingHandling = shipping * spoolReady; // initializing variables for output and math
    cout << fixed << setprecision(2); // output formatting
    cout << "Subtotal ready to ship: $" << setw(10) << subtotal << endl; // outputting subtotal
    cout << "Shipping and handling:  $" << setw(10) << shippingHandling << endl; // outputting for shipping and handling charge
    cout << "Total shipping charges: $" << setw(10) << subtotal + shippingHandling << endl; // outputting total charge
}
