/*
Write a complete program that
declares an int variable,
reads a value from the keyboard into that variable, and
writes to standard output the variable's value, twice the value, and the square of the value, separated by spaces.
Besides the numbers, nothing else should be written to standard output except for spaces separating the values.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declares the amogus variable
    int amogus;
    // Prompts user to assign amogus a value
    cin >> amogus;
    // Prints various values involving the amogus variable
    cout << amogus << " " << amogus * 2 << " " << amogus * amogus;
    return 0;
}
