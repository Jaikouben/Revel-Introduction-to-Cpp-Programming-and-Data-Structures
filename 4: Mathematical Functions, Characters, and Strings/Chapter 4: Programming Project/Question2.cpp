/*
(Convert an uppercase letter to lowercase)
Write a program that prompts the user to enter an uppercase letter and converts it to a lowercase letter. For an incorrect input, display invalid input.
Sample Run 1
Enter an uppercase letter: T
The lowercase letter is t
Sample Run 2
Enter an uppercase letter: 5
5 is an invalid input
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    // Prompts user to enter an uppercase letter
    cout << "Enter an uppercase letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
        cout << "The lowercase letter is " << ch << endl;
    } else {
        cout << ch << " is an invalid input" << endl;
    }
    return 0;
}
