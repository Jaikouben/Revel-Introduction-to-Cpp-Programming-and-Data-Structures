/*
(Statistics: compute deviation)
The description of this project is given in Programming Exercise 7.11 in the Chapter 7 Programming Exercise from the Book section.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <cmath>

using namespace std;

double mean(const double x[], int size) {
    double sum = 0;
    if (size == 0) return sum;
        for (int i = 0; i < size; i++) {
            sum += x[i];
        }
    return sum / size;
}

double deviation(const double x[], int size) {
    if (size < 1) {
        return 0;
    }
    double xm = mean(x, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (x[i] - xm) * (x[i] - xm);
    }
    sum = sum / (size - 1);
    return sqrt(sum);
}

int main()
{
    cout << "Enter 10 numbers: ";
    double numbers[10];
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    cout << "The mean is " << mean(numbers, 10) << endl;
    cout << "The standard deviation is " << deviation(numbers, 10) << endl;

    return 0;
}
