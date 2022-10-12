/*
(Sum elements in each column)
Write a function that returns the sum of all the elements in a specified column in a matrix using the following header:
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize,
  int columnIndex);
Write a test program that reads a 3-by-4 matrix and displays the sum of each column.
Sample Run
Enter a 3-by-4 matrix row by row:
1.5 2 3 4
5.5 6 7 8
9.5 1 3 1
Sum of the elements at column 0 is 16.5
Sum of the elements at column 1 is 9
Sum of the elements at column 2 is 13
Sum of the elements at column 3 is 13
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std;

const int SIZE = 4;
const int rowSize = 3;

double sumColumn(const double m[][SIZE],int rowSize,int columnIndex);
int main()
{
    double matrix[rowSize][SIZE];

    cout << "Enter a 3-by-4 matrix row by row:" << endl;
    for(int row = 0; row < rowSize; row++)
    {
        for(int col = 0; col < SIZE; col++)
           cin >> matrix[row][col];
    }

    for(int columnIndex=0;columnIndex<SIZE;columnIndex++)
        cout << "Sum of the elements at column "<<columnIndex<<" is " << sumColumn(matrix, rowSize, columnIndex) << endl;

    system("pause");
    return 0;
}

double sumColumn(const double m[][SIZE],int rowSize,int columnIndex)
{
    double columnSum = 0;

    for(int row = 0;row < rowSize;row++)
        columnSum += m[row][columnIndex];
  
    return columnSum;
}
