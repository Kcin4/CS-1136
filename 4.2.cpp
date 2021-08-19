// General overview This program will calculate the rise in ocean levels over 5, 10, and 50 years.
// Calculate rising ocean levels based on the estimated rate of rising (in millimeters). This
// estimated value is read from cin into variable risingLevel
//

#include <iostream>

using namespace std;

int main()
{
   double risingLevel;

   // read in the estimated rising ocean level
   cout << "Enter the estimated ocean level" << endl;
   cin >> risingLevel;

   cout << "Level: " << risingLevel << endl; //giving back input value
   cout << "Years: 5, " << "Rise: " << risingLevel * 5 << endl; // calculating rise at 5, 10 and 50 years
   cout << "Years: 10, " << "Rise: " <<risingLevel * 10 << endl;
   cout << "Years: 50, " << "Rise: " <<risingLevel * 50 << endl;


   return 0;
}
