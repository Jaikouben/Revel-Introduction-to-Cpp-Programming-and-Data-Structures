/*
Write a loop that reads positive integers from console input and that terminates when it reads an integer that is not positive. After the loop terminates, it prints out the sum of all the even integers read.
Declare any variables that are needed.
*/

int sum, k = 2;
while (k > 0)
{
    cin >> k;
    if (k % 2 == 0 && k > 0)
        sum += k;
}
cout << sum;
