/*
(Sorted?)
Write the following function that returns true if the list is already sorted in increasing order:
bool isSorted(const int list[], int size)
Write a test program that prompts the user to enter a list and displays whether the list is sorted or not.
Assume that the maximum number of integers in the list is 100. So declare array of size 100.
Sample Run 1
Enter the size of the list: 8
Enter list: 10 1 5 16 61 9 11 1
The list is not sorted
Sample Run 2
Enter the size of the list: 10
Enter list: 1 1 3 4 4 5 7 9 11 21
The list is already sorted
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
  
    cout << "Enter the size of the list : ";
    cin >> n;                                  
    int arr[n];
  
    cout << "Enter list :";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];                        
    }
  
    int j, flag = 0;
  
    for(int i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {                 
                flag=1;
            }
        }        
    }
  
    if(flag == 0)                                     
        cout << "The list is already sorted";
    else                                            
        cout << "The list is not sorted";
    
    return 0;
}
