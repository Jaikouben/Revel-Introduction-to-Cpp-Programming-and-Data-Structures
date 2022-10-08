/*
(Count occurrence of numbers)
Write a program that reads at most 100 integers between 1 and 100 and counts the occurrence of each number. Assume the input ends with 0.
Sample Run
Enter the integers between 1 and 100: 2 5 6 5 4 3 23 43 2 0
2 occurs 2 times
3 occurs 1 time
4 occurs 1 time
5 occurs 2 times
6 occurs 1 time
23 occurs 1 time
43 occurs 1 time
Note that if a number occurs more than once, the plural word “times” is used in the output. Numbers are displayed in an increasing order.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std;

int main()
{
    // Creates some pretty important variables
    int arr[100], i = 0, count, num, cnt = 0, temp;
    
    // Prompts the user to enter integers between 1 and 100
    cout << "Enter integers between 1 and 100: ";
    
    // Reads the integers
    while(true || cnt<100)
    {
        cin >> arr[i];
        cnt++;
        if(arr[i] == 0) 
            break;
        else
            i++;
    }

    // Sorts the array
    for(int j = 0; j < i; j++)
    {
        for(int k = 0; k < i; k++)
        {
            if(arr[j] < arr[k])
            {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
    
        }
    
    }
    
    for(int j = 0; j < i; j++)
    {
        num = arr[j];
        count = 1;
        if(num > 0)
        {
            for(int k = j + 1; k < i; k++)
            {
                if(num == arr[k])
                {
                    count++;
                    arr[k] =- 1;
                }
            }

            cout << "\n" << num << " occurs " << count << "times";
        }
    }
}
