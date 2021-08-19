#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// In this program you will be reading sales information from a file and writing out a bar chart for each of the stores.
// The bar charts will be created by writing out a sequence of * characters.
int main() {
    unsigned int storeNum=0, validBar=0; //initializing store number variable
    long long int saleValue=0; //initializing sales value variable
    string salesData; //initializing input file name variable

    cout << "Enter input file name" << endl; //outputting user prompt
    cin >> salesData; //inputting user prompt to string for file name of input

    ifstream input; //streaming input file
    input.open(salesData); //opening input file
    ofstream output; //streaming output file
    output.open("saleschart.txt"); //opening output file
    if (input){ // the file opened successfully
        while (input >> storeNum >> saleValue)
            if (storeNum>=1 && storeNum<=99 && saleValue>0)
                validBar++;
        if (validBar>0){
            output << "SALES BAR CHART" << endl; //outputting headers
            output << "(Each * equals 5,000 dollars)" << endl;
        }
        input.close();
        input.open(salesData);
        while (input >> storeNum >> saleValue){ //loop for processing input information
            if(storeNum<1 or storeNum>99) //condition if store number is outside of valid values
                cout << "The store number " <<  storeNum << " is not valid" << endl;
            else if(saleValue<0) //condition if sales value is less than valid values
                cout << "The sales value for store " << storeNum << " is negative" << endl;
            else{ //else condition if everything else is valid
                output << "Store " << fixed << setw(2) << storeNum << ": "; //outputting store number
                if(saleValue<5000) //outputting new line if sale value is less than 5000 ie no *
                    output << endl;
                for(int i=0; i<saleValue/5000; i++){ //loop for outputting *s for valid sales and stores
                    output << "*";
                    if(i==(saleValue/5000)-1) //outputting new line after the last *
                        output << endl;
                }
            }
       }
        input.close(); //closing the input file
        output.close(); //closing output file
    }
    else{ //condition if input file can not be opened correctly
        cout << "File \"" << salesData << "\" could not be opened" << endl;
    }
}

