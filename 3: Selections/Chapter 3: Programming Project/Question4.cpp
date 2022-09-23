/*
(Science: day of the week)
Zeller’s congruence is an algorithm developed by Christian Zeller to calculate the day of the week.
The formula is:
h = (q + 26(m + 1)/10 + k + k/4 + j/4 + 5j) % 7
where
- h is the day of the week (0: Saturday, 1: Sunday, 2: Monday, 3: Tuesday, 4: Wednesday, 5: Thursday, 6: Friday).
- q is the day of the month.
- m is the month (3: March, 4: April, . . . , 12: December). January and February are counted as months 13 and 14 of the previous year.
- j is year/100
- k is the year of the century (i.e., year % 100)
Note that all divisions in this exercise perform an integer division.
Write a program that prompts the user to enter a year, month, and day of the month, and displays the name of the day of the week.
Sample Run 1
Enter year: (e.g., 2012): 2015
Enter month: 1-12: 1
Enter the day of the month: 1-31: 25
Day of the week is Sunday
Sample Run 2
Enter year: (e.g., 2012): 2012
Enter month: 1-12: 5
Enter the day of the month: 1-31: 12
Day of the week is Saturday
(Hint: January and February are counted as 13 and 14 in the formula, so you need to convert the user input 1 to 13 and 2 to 14 for the month and change the year to the previous year.)
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html. 
*/

#include <iostream>
using namespace std;

int main()
{
        // Variables holding year, month, and day
        int year, month, day;
        
        // Prompts user to enter a year, month, and day
        cout << "Enter year: (e.g., 2012): ";
        cin >> year;
        cout << "Enter month: 1-12: ";
        cin >> month;
        cout << "Enter the day of the month: 1-31: ";
        cin >> day;
        
        if(month==1 || month==2)
        {
                month += 12;
                year--;
        }
        
        // Performs some calculations
        int t = (26 * (month + 1))/10;
        int k = year % 100;
        int j = year / 100;
        int h = (day + t + k + k/4 + j/4 + 5*j)%7;
        
        
        // Stores the day of the week
        string d = "";
        
        // Switch case for finding h's corresponding day
        switch(h)
        {
                case 0:
                {
                        d = "Saturday";
                        break;
                }
                case 1:
                {
                        d = "Sunday";
                        break;
                }
                case 2:
                {
                        d = "Monday";
                        break;
                }
                case 3:
                {
                        d = "Tuesday";
                        break;
                }
                case 4:
                {
                        d = "Wednesday";
                        break;
                }
                case 5:
                {
                        d = "Thursday";
                        break;
                }
                case 6:
                {
                        d = "Friday";
                        break;
                }
        }
        
        // Displays the day of the week
        cout<<"Day of the week is "<<d;

        return 0;
}
