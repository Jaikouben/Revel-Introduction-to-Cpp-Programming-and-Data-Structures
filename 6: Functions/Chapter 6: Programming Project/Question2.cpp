/*
(Algebra: solve 2 × 2 linear equations)
You can use Cramer’s rule to solve the following 2 × 2 system of linear equation:
ax + by = e
cx + dy = f
x = (ed - bf) / (ad - bc)
y = (af - ec) / (ad - bc)
Write a function with the following header:
void solveEquation(double a, double b, double c, double d,
  double e, double f, double& x, double& y, bool& isSolvable)
If ad - bc is 0, the equation has no solution and isSolvable should be false.
Write a program that prompts the user to enter a, b, c, d, e, and f and displays the result.
If ad - bc is 0, report that “The equation has no solution.”
See Programming Exercise 3.3 for sample runs.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer https://liangcpp.pearsoncmg.com/faq.html. 
*/

#include <iostream>
#include <iomanip>    

using namespace std;

void solveEquation(double a, double b, double c, double d,
double e, double f, double& x, double& y, bool& isSolvable) 
{
        if(a*d - b*c == 0) 
        {
                isSolvable = false;
                return;
        }
        isSolvable = true;
        x = (e*d - b*f) / (a*d - b*c);
        y = (a*f - e*c) / (a*d - b*c);
}

// Prompts the user to enter 6 numbers
int main(){
       double a, b, c, d, e, f;
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

       if (!isSolvable) {
           cout << " The equation has no solution." << endl;
       } else {
           cout << " x is: " << x << "and y is: " << y << endl;
       }
       return 0;
   }
