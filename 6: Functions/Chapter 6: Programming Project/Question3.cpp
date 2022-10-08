/*
(Binary to decimal)
Write a function that returns a decimal number from a binary string. The function header is as follows:
int bin2Dec(const string& binaryString)
For example, binaryString 10001 is 17 (1*2^4+0*2^3+0*2^2+0*2+1=17 ). So, bin2Dec("10001") returns 17. Write a test program that prompts the user to enter a binary number as a string and displays its decimal equivalent value.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <string>

using namespace std;

int bin2Dec(const string &binaryString) {
    if (binaryString.empty()) {
        return 0;
    } else {
        return 2 * bin2Dec(binaryString.substr(0, binaryString.size() - 1)) +
               (binaryString[binaryString.size() - 1] - '0');
    }
}

string dec2Bin(int value) {
    if (value == 0) {
        return "0";
    } else if (value == 1) {
        return "1";
    } else {
        string binary;
        int d = value % 2;
        if (d == 0) {
            binary = "0";
        } else {
            binary = "1";
        }
        return dec2Bin(value / 2) + binary;
    }
}

int main() {
    int value;
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal: " << bin2Dec(binary) << endl;
    cout << "Enter a decimal number: ";
    cin >> value;
    cout << "Binary: " << dec2Bin(value) << endl;
    return 0;
}
