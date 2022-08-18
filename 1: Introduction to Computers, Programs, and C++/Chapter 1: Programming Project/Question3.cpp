/*
(Population projection)
The U.S. Census Bureau projects population based on the following assumptions:
One birth every 7 seconds.
One death every 13 seconds.
One new immigrant every 45 seconds
Write a program that displays the population for each of the next five years. Assume the current population is 312,032,486 and one year has 365 days.
Hint: In C++, if two integers perform division, the result is the quotient. The fractional part is truncated. For example, 5 / 4 is 1 (not 1.25) and 10 / 4 is 2 (not 2.5). To get an accuate result with the fractional part, one of the values involved in the division must be a number with a decimal point. For example, 5.0 / 4 is 1.25 and 10 / 4.0 is 2.5.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << 312032486 + 365 * 24 * 60 * 60 / 7.0 - 365 * 24 * 60 * 60 / 13.0 + 365 * 24 * 60 * 60 / 45.0 << endl;
    cout << 312032486 + 2 * 365 * 24 * 60 * 60 / 7.0 - 2 * 365 * 24 * 60 * 60 / 13.0 + 2 * 365 * 24 * 60 * 60 / 45.0 << endl;
    cout << 312032486 + 3 * 365 * 24 * 60 * 60 / 7.0 - 3 * 365 * 24 * 60 * 60 / 13.0 + 3 * 365 * 24 * 60 * 60 / 45.0 << endl;
    cout << 312032486 + 4 * 365 * 24 * 60 * 60 / 7.0 - 4 * 365 * 24 * 60 * 60 / 13.0 + 4 * 365 * 24 * 60 * 60 / 45.0 << endl;
    cout << 312032486 + 5 * 365 * 24 * 60 * 60 / 7.0 - 5 * 365 * 24 * 60 * 60 / 13.0 + 5 * 365 * 24 * 60 * 60 / 45.0 << endl;
    return 0;
}
