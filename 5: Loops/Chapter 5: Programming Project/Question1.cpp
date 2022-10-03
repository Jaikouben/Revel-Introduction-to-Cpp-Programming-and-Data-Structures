/*
(Count positive and negative numbers and compute the average of numbers)
Write a program that reads an unspecified number of integers, determines how many positive and negative values have been read, and computes the total and average of the input values (not counting zeros). Your program ends with the input 0. Display the average as a floating-point number.
If you entire input is 0, display 'No numbers are entered except 0.'
Sample Run 1
Enter an integer, the input ends if it is 0: 1 2 -1 3 0
The number of positives is 3
The number of negatives is 1
The total is 5
The average is 1.25
Sample Run 2
Enter an integer, the input ends if it is 0: 0
No numbers are entered except 0
*/

#include <iostream>

using namespace std;

int main()
{
  int num, pos = 0, neg = 0,counter = 0, total = 0;
  double avg;
  
  cout << "Enter an integer, the input ends if it is 0: ";
  cin >> num;
  
  while (num != 0){
    counter++;
    if (num < 0)
      neg++;
    if (num > 0)
      pos++;
    total = total + num;
    cin >> num;
  }
  
  avg = (double) total / counter;
  
  if (counter > 0){
    cout << "The number of positives is " << pos << endl;
    cout << "The number of negatives is " << neg << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << avg;
  }
  else {
    cout << "\nNo numbers are entered except 0";
  }

  return 0;
}
