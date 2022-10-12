/*
(Central city)
Given a set of cities, the central point is the city that has the shortest total distance to all other cities. Write a program that prompts the user to enter the number of cities and the locations of the cities (coordinates), and finds the central city and its total distance to all other cities. Assume that the maximum number of cities is 20.
Sample Run
Enter the number of cities: 5
Enter the coordinates of the cities: 2.5 5 5.1 3 1 9 5.4 54 5.5 2.1
The central city is at (2.5, 5.0)
The total distance to all other cities is 60.81
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double array[][2], int num_points, int pointIndex) {
    double d = 0;
    for (int j = 0; j < num_points; j++) {
        d += sqrt(pow(array[pointIndex][0] - array[j][0], 2) + pow(array[pointIndex][1] - array[j][1], 2));
    }
    return d;
}

int main() {
    int numPoints;
    cout << "Enter the number of cities: ";
    cin >> numPoints;
    double cities[20][2];
    cout << "Enter the coordinates of the cities: ";
    for (int i = 0; i < numPoints; i++) {
        cin >> cities[i][0] >> cities[i][1];
    }
    int central_city = 0;
    for (int i = 0; i < numPoints; i++) {
        if (distance(cities, numPoints, i) < distance(cities, numPoints, central_city)) {
            central_city = i;
        }
    }
    cout << setprecision(1) << fixed;
    cout << "The central city is at (" << cities[central_city][0] << ", " << cities[central_city][1] << ")" << endl;
    cout << setprecision(2) << fixed;
    cout << "The total distance to all other cities is " << distance(cities, numPoints, central_city) << endl;
    return 0;
}
