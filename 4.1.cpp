#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/* Write a C++ program that will compute the total sales tax on a $95 purchase.
Assume the state sales tax is 6% and the county sales tax is 2%. You only have
to output the total sales tax. You should not output any text nor should to output
the $. Make sure you end your output with the endl or "/n" new line character.
You must calculate the total taxes in the program, and then output them.
Do not calculate them outside of the program.
Create variables for the purchase price, state sales tax rate, county sales tax rate,
and the total sales tax that you will be calculating. Give these variables meaningful
names. The following are NOT meaningful variable names - p, st, co, ts. Examples of a
meaningful variable names would be purchasePrice.*/

int main() {

    double purchPrice, stateTax, countyTax, totalTax; // creating variables

    purchPrice=95; //purchase price
    stateTax=0.06; //state tax
    countyTax=0.02; //county tax
    totalTax = ((purchPrice * stateTax) + (countyTax * purchPrice)); //total tax
    cout << totalTax << endl; //outputting tax

}
