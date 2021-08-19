#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
//Purpose: to input dollar amount and output an equivalent exchange in a different currency.
int main() {

    const double pesoExch=19.73, euroExch=0.84, yenExch=113.27; //initializing constant exchange rate variables
    double dollars, pesos, euros, yen; //initializing output variables

    cout << "Enter the amount in dollars" << endl; //prompt user to input dollars
    cin >> dollars; //input variable dollars
    pesos = dollars * pesoExch; //math to figure out exchange values
    euros = dollars * euroExch;
    yen = dollars * yenExch;
    cout << setw(15) << "Dollars"; //formatting table and outputting columns
    cout << setw(15) << "Yen";
    cout << setw(15) << "Euros";
    cout << setw(15) << "Pesos" << endl;
    cout << fixed;
    cout << setw(15) << setprecision(2) << dollars; //outputting exchange amounts
    cout << setw(15) << setprecision(2) << yen;
    cout << setw(15) << setprecision(2) << euros;
    cout << setw(15) << setprecision(2) << pesos << endl;
}
