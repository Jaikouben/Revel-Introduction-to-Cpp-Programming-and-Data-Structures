/*
(Find the two highest scores)
Write a program that prompts the user to enter the number of students and each student’s name and score, and displays the name and score of the student with the highest score and the student with the second-highest score.
Sample Run
Enter the number of students: 5
Enter a student name: Smith
Enter a student score: 60
Enter a student name: Jones
Enter a student score: 96
Enter a student name: Peterson
Enter a student score: 85
Enter a student name: Greenlaw
Enter a student score: 98
Enter a student name: Zhang
Enter a student score: 95
Top two students:
Greenlaw's score is 98.0
Jones's score is 96.0
*/

#include <iostream>

using namespace std;

int main()
{
  cout << "Enter the number of students: ";
  int numberOfStudents;
  cin >> numberOfStudents;
  
  double score = -1;
  double score2;
  string name2;
  string name;
  int i;
  
  for (int i = 0; i < numberOfStudents; i++){
    cout << "Enter a student name: ";
    string name1;
    cin >> name1;
    
    cout << "Enter a student score: ";
    double score1;
    cin >> score1;
    
    if (score < score1){
      name2 = name;
      name = name1;
      score2 = score;
      score = score1;
    }
    
    if(score2 < score1 && score1 < score){
      name2 = name1;
      score2 = score1;
    }
  }
  
  cout << "Top Two students: \n";
  cout << name << "'s score is " << score << endl;
  cout << name2 << "'s score is " << score2 << endl;
  return 0;
}
