/*
The description of this project is given in Programming Exercise 3.1 in the Chapter 3 Programming Exercise from the Book section.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Prompts user to enter a, b, and c
    cout << "Enter a, b, c: ";
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double discrim = b * b - 4 * a * c;
    if(discrim < 0)
    {
        // Displays message if equation has no real roots
        cout << "The equation has no real roots";
    }
    else if(discrim > 0)
    {
        double r1 = (-b + sqrt(discrim)) / (2 * a);
        double r2 = (-b - sqrt(discrim)) / (2 * a);

        cout << "The equation has two roots " << r1 << " and " << r2;
    }
    else // if discrim == 0
    {
        double r = -b / (2 * a);
        // Displays message if equation has one root
        cout << "The equation has one root " << r;
    }

    return 0;
}
