/*
Write a loop that reads positive integers from console input, printing out those values that are even, separating them with spaces, and that terminates when it reads an integer that is not positive.
Declare any variables that are needed.
*/

int k = 2;
while (k > 0)
{
    cin >> k;
    if (k % 2 == 0 && k > 0)
        cout << k << " ";
}
