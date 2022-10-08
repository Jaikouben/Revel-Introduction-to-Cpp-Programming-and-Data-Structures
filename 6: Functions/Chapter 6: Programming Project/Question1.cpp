/*
(Financial application: compute the future investment value)
Write a function that computes future investment value at a given interest rate for a specified number of years. The future investment is determined using the formula in Programming Exercise 2.23.
Use the following function header:
double futureInvestmentValue(double investmentAmount, 
  double monthlyInterestRate, int years)
For example,
futureInvestmentValue(10000, 0.05/12, 5) returns 12833.59.
Write a test program that prompts the user to enter the investment amount (e.g., 1000) and the interest rate (e.g., 9%) and prints a table that displays future value for the years from 1 to 30, as shown below:
The amount invested: 1000
Annual interest rate: 9
Years Future Value
1     1093.81
2     1196.41
...
29    13467.25
30    14730.58
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
{
   return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}

int main(){
   cout << fixed << showpoint << setprecision(2);
   double amt, amtInterest;
   
   // Prompts user to enter the amount invested
   cout << "The amount invested: ";
   cin >> amt;
   
   // Prompts user to enter the annual interest
   cout << "Annual interest rate: ";
   cin >> amtInterest;
   
   // Calculates the interest 
   amtInterest = (amtInterest * 0.01) / 12.0; 
   cout << "Years\t Future Value" << endl;
   for(int i = 1; i <= 30; i++){
       cout << i << "\t" << futureInvestmentValue(amt, amtInterest, i) << endl;
   }
   return 0;
}
