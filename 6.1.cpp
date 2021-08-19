#include <iostream>
#include <iomanip>
#include <cmath> //math
#include <fstream> //file stream
#include <string> //string
#include <sstream> //string stream
using namespace std;
// Purpose: to input test scores and find the average of them and output
int main() {

    double test1, test2, test3, test4, test5; //initializing variables

    cout << "Enter 5 test grades" << endl; //giving prompt

    cin >> test1; //inputting test scores
    cin >> test2;
    cin >> test3;
    cin >> test4;
    cin >> test5;
    cout << "Average: " << fixed << showpoint << setprecision(1) << (test1 + test2 + test3 + test4 + test5) / 5 << endl; //outputting average
}
