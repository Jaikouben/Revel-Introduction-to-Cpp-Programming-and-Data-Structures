/*
(Order three cities)
Write a program that prompts the user to enter three cities and displays them in ascending order. City names may contain spaces.
Sample Run
Enter the first city: Chicago
Enter the second city: New York
Enter the third city: Atlanta
The three cities in alphabetical order are Atlanta Chicago New York
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2,str3;
    // Prompts user to enter three cities
    cout<<"Enter the first city: ";
    getline(cin,str1);
    cout<<"Enter the second city: ";
    getline(cin,str2);
    cout<<"Enter the third city: ";
    getline(cin,str3);
    // comparing city 1 and 2
    if(str1.compare(str2)>0) {
        string temp=str1;
        str1=str2;
        str2=temp;
    }
    // comparing city 2 and 3
    if(str2.compare(str3)>0) {
        string temp=str2;
        str2=str3;
        str3=temp;
    }
    // comparing city 1 and 2
    if(str1.compare(str2)>0) {
        string temp=str1;
        str1=str2;
        str2=temp;
    }
    cout<<"The three cities in alphabetical order are "<<str1<<" "<<str2<<" "<<str3;
        
}
