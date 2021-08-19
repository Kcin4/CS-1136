#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// Purpose: Figure out the profit/loss from an input of a number of shares purchased, purchase price, and sale price. Include commission in both sale and purchase.
int main() {

    int shareNum; //initializing number of shares
    const double commish=0.035; //initializing commission
    double purchPrice, salePrice, purchTotal, purchCom, costTotal, saleTotal, saleCom, incTotal, gainloss; // initializing purchase price, sale price, purchase total,
                                                                                                            // purchase commission, total cost to purchase,
                                                                                                            // sale total, commission to sell, total income, gain or loss
    string nameCo; // initializing string variable

    cout << fixed << setprecision(2); // setting formatting

    cout << "Enter the name of the company" << endl; //inputting name of company, number of shares, purchase price, and sale price
    getline (cin,nameCo);
    cout << "Enter shares of stock" << endl;
    cin >> shareNum;
    cout << "Enter purchase price" << endl;
    cin >> purchPrice;
    cout << "Enter sale price" << endl;
    cin >> salePrice;
    cout << endl;

    cout << "Company: " << nameCo << endl; // outputting company name and number of shares traded
    cout << "Shares: " << shareNum << endl;
    cout << endl;

    cout << "Purchase/share: $" << purchPrice << endl; //outputting purchase math
    purchTotal = purchPrice * shareNum;
    cout << "Cost of stock: $" << purchTotal << endl;
    purchCom = purchTotal * commish;
    cout << "Cost of commission: $" << purchCom << endl;
    costTotal = purchTotal + purchCom;
    cout << "Total cost: $" << costTotal << endl;
    cout << endl;

    cout << "Sale/share: $" << salePrice << endl; //outputting sale math
    saleTotal = salePrice * shareNum;
    cout << "Income from stock: $" << saleTotal << endl;
    saleCom = saleTotal * commish;
    cout << "Cost of commission: $" << saleCom << endl;
    incTotal = saleTotal - saleCom;
    cout << "Total income: $" << incTotal << endl;
    cout << endl;

    gainloss = incTotal - costTotal;
    cout << "Gain or loss: $" << gainloss << endl; // outputting gain or loss

}
