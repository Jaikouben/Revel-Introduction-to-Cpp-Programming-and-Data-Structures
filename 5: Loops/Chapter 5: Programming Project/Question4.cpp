/*
(Financial application: compare loans with various interest rates)
Write a program that lets the user enter the loan amount and loan period in number of years and displays the monthly and total payments for each interest rate starting from 5% to 8%, with an increment of 1/8.
Sample Run
Loan Amount: 10000
Number of Years: 5
Interest Rate Monthly Payment Total Payment
5.000%        188.71          11322.74
5.125%        189.28          11357.13
5.250%        189.85          11391.59
...
7.875%        202.17          12129.97
8.000%        202.76          12165.83
For the formula to compute monthly payment, see LiveExample 2.11, ComputeLoan.cpp.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  double loanAmount, monthlyPayment;
  int years;

  cout << "Loan Amount: ";
  cin >> loanAmount;

  cout << "Number of Years: ";
  cin >> years;

  cout << right << setw(21) << "Interest Rate" ;
  cout << right << setw(21) << "Monthly Payment" ;
  cout << right << setw(21) << "Total Payment" << endl;

  for(double rate = 5.0; rate <= 8; rate += 0.125 ) {
    cout << fixed << right << setw(20) << setprecision(3) << rate << "$";

    // Calculates monthly interest rate
    double interestRate = rate/(100 * 12);
    monthlyPayment = interestRate * pow (( 1 + interestRate ), years*12) / (pow(( 1 + interestRate), years*12) -1) * loanAmount;

    cout << right << setw(20) << fixed << setprecision(2) << monthlyPayment << "$";
    cout << right << setw(20) << fixed << setprecision(2) << (years * 12 * monthlyPayment) << "$" << endl;

  }

  return 0;
}
