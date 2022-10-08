/*
(Print distinct numbers)
Write a program that reads in 10 numbers and displays distinct numbers (i.e., if a number appears multiple times, it is displayed only once). The numbers are displayed in the order of their input and separated by exactly one space.
(Hint: Read a number and store it to an array if it is new. If the number is already in the array, discard it. After the input, the array contains the distinct numbers.)
Sample Run
Enter ten numbers: 1 2 3 2 1 6 3 4 5 2
The distinct numbers are: 1 2 3 6 4 5
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std; 

int main(void)
{
    int array[10] = {0};
    int new_arr[10000] = {0};
      
      
    int key;
 
    int flag = 0;    
 
 
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];		
    }
 
    for(int j = 0; j < 10; j++)
    {
        key = array[j];
	
        for(int i = 0; i < 10; i++)    
        {
            if (array[i] == key)  
            {
                flag = flag + 1;     
            }
        }
      
    if (flag == 1)  
    {
        cout << array[j] << endl;
    }
      
    else if(flag > 1)
    {
        new_arr[array[j]] ++;
        if(new_arr[array[j]] == 1)
        {
            cout << array[j] << endl;
        }
    }
     
    flag = 0;   
    }
    return 0;
}
