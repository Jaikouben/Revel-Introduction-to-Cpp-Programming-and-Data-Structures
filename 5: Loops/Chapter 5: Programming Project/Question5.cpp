/*
(Count vowels and consonants)
Assume letters A/a, E/e, I/i, O/o, and U/u as the vowels.
Write a program that prompts the user to enter a string and displays the number of vowels and consonants in the string.
Sample Run
Enter a string: Programming is fun
The number of vowels is 5
The number of consonants is 11
*/

#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char str[100];
    int v = 0, c = 0;
  
    cout << "Enter a string : ";
    gets(str);
  
    for (int i = 0; str[i]!='\0'; ++i)   
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            ++v;
        else
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                ++c; 
    }

    cout << "Number of vowels : " << v;
    cout << "\nNumber of consonants : " << c;
    
    return 0;
}
