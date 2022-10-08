/*
(Decimal to binary)
Write a function that parses a decimal number into a binary number as a string. The function header is as follows:
string dec2Bin(int value)
See Appendix D, “Number Systems,” for converting a decimal into a binary.
Write a test program that prompts the user to enter a decimal number and displays its equivalent binary value.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <string>
using namespace std;

string dec2Bin(int value) {
    string s;
    while (value > 0) {
        if (value % 2 == 0) {
            s = "0" + s;
        } else {
            s = "1" + s;
        }
        value /= 2;
    }
    return s;
}

int main() {
    int value;
    cout << "Enter decimal number: ";
    cin >> value;
    cout << "The binary equivalent is: " << dec2Bin(value) << endl;
    return 0;
}
