/*
(Assign grades)
Write a program that reads student scores, gets the best score, and then assigns grades based on the following scheme:
Grade is A if score is >= best – 10;
Grade is B if score is >= best – 20;
Grade is C if score is >= best – 30;
Grade is D if score is >= best – 40;
Grade is F otherwise.
The program prompts the user to enter the total number of students, then prompts the user to enter all of the scores, and concludes by displaying the grades.
Sample Run
Enter the number of students: 4
Enter 4 scores: 40 55 70 58
Student 0 score is 40 and grade is C
Student 1 score is 55 and grade is B
Student 2 score is 70 and grade is A
Student 3 score is 58 and grade is B
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
    int n, k, j = 0, max;
    // Prompts user to enter the number of students
    cout << "Enter the number of students: ";
    cin >> n;
    // Prompts the user to enter the scores of the students specified
    cout << "Enter " << n << " scores: ";
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        g1.push_back(k);
    }
    max = g1.front();
    for (auto i = g1.begin(); i != g1.end(); ++i) 
    {
        if(max <* i)
        {
            max =* i;
        }
    }
    for (auto i = g1.begin(); i != g1.end(); ++i) 
    {
        if(*i >= max - 10)
        {
            cout << "Student " << j + 1 <<" score is " << *i <<" and grade is A." << endl;
        }
        else if(*i >= max - 20)
        {
            cout << "Student " << j + 1 <<" score is " << * i <<" and grade is B." << endl;
        }
        else if(*i >= max - 30)
        {
            cout << "Student " << j + 1 <<" score is " << * i << " and grade is C." << endl;
        }
        else if(*i >= 40)
        {
            cout << "Student " << j + 1 <<" score is " << *i << " and grade is D." <<endl;
        }
        else
        {
            cout << "Student " << j + 1 <<" score is " << *i <<" and grade is F." << endl;
        }
        j++;
    }
}
