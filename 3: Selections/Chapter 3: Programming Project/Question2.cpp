/*
(Algebra: solve 2 × 2 linear equations)
You can use Cramer’s rule to solve the following 2 × 2 system of linear equation:
ax + by = e
cx + dy = f
x = (ed - bf) / (ad - bc)
y = (af - ec) / (ad - bc)
Write a program that prompts the user to enter a, b, c, d, e and f and displays the result.
If ad - bc is 0, report that “The equation has no solution”.
Sample Run 1
Enter a, b, c, d, e, f: 9.0 4.0 3.0 -5.0 -6.0 -21.0
x is -2 and y is 3
Sample Run 2
Enter a, b, c, d, e, f: 1.0 2.0 2.0 4.0 4.0 5.0
The equation has no solution
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <iomanip>    

using namespace std;

void solveEquation(double a, double b, double c, double d,
double e, double f, double& x, double& y, bool& isSolvable) 
{
    if(a*d - b*c == 0) {
        isSolvable = false;
        return;
    }
    isSolvable = true;
    // Calculates values
    x = (e*d - b*f) / (a*d - b*c);
    y = (a*f - e*c) / (a*d - b*c);
}
// Ask the user to enter the 6 numbers

int main(){
    double a, b, c, d, e, f;
    // Prompts user to enter a, b, c, d, e, and f
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter d: ";
    cin >> d;
    cout << "Enter e: ";
    cin >> e;
    cout << "Enter f: ";
    cin >> f;

    bool isSolvable = false;
    double x, y;
    solveEquation(a, b, c, d, e, f, x, y, isSolvable);

    // Displays error message if equation has no solution
    if (!isSolvable) 
    {
        cout << " The equation has no solution." << endl;
    } 
    else 
    {
        cout << " x is: " << x << "and y is: " << y << endl;
    }
        return 0;
}
