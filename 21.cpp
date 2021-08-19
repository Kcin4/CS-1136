//
// This program will calculate the pay for a student based on the number
// of hours the student has worked and the hourly pay for the student.
//
// The number of hours worked and the pay per hour are read in by the
// student from cin.
//

#include <iostream>

using namespace std;

int main()
{
   double hours, rate, pay;

   // Get the number of hours worked.
   cout << "How many hours did you work?" << endl;
   cin >> hours;

   // Get the hourly pay rate.
   cout << "How much do you get paid per hour?" << endl;
   cin >> rate;

   // Calculate the pay.
   pay = hours * rate;

   // Display the pay.
   cout << "You have earned $" << pay << endl;

   return 0;
}
