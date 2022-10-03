/*
Write a loop that reads positive integers from console input, printing out those values that are greater than 100, and that terminates when it reads an integer that is not positive. The printed values should be separated by single blank spaces. Declare any variables that are needed.
*/

int k = 1;
while (k > 0)
{
    cin >> k;
    if (k > 100)
        cout << k << " ";
}
