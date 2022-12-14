/*
(Occurrence of max numbers)
Write a program that reads integers, finds the largest of them, and counts its occurrences. Assume that the input ends with number 0. Suppose that you entered 3 5 2 5 5 5 0; the program finds that the largest is 5 and the occurrence count for 5 is 4.
Hint: Maintain two variables, max and count. max stores the current max number and count stores its occurrences. Initially, assign the first number to max and 1 to count. Compare each subsequent number with max. If the number is greater than max, assign it to max and reset count to 1. If the number is equal to max, increment count by 1.
Sample Run 1
Enter an integer (0: for end of input): 3
Enter an integer (0: for end of input): 5
Enter an integer (0: for end of input): 2
Enter an integer (0: for end of input): 5
Enter an integer (0: for end of input): 5
Enter an integer (0: for end of input): 5
Enter an integer (0: for end of input): 0
The largest number is 5
The occurrence count of the largest number is 4
Sample Run 2
Enter an integer (0: for end of input): 0
No numbers are entered except 0
*/

#include <iostream>
using namespace std;

int main()
{
  int max = 0, count = 1, n;
  
  while (1){
    cout << "Enter an integer (0: for end of the input): ";
    cin >> n;
    
    if (n == 0)
      break;
    else {
      if(max == n){
        count++;
      }
    if (max < n){
      max=n;
      count=1;
    }
  }
}
  
  cout << "The largest number is " << max << endl;
  cout << "The occurrence count of the largest number is " << count;
  return 0;
}
