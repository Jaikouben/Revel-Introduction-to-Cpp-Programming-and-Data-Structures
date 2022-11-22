/*
(Pattern recognition: consecutive four equal numbers)
Rewrite the isConsecutiveFour function in Programming Exercise 8.21 using a vector as follows:
bool isConsecutiveFour(const vector<vector<int>>& values)
Write a test program like the one in Programming Exercise 8.21.
Sample Run 1
Enter row size: 6
Enter column size: 7
0 1 0 3 1 6 1
0 1 6 8 6 0 1
5 6 2 1 8 2 9
6 5 6 1 1 9 1
1 3 6 1 4 0 7
3 3 3 3 4 0 7
The array has consecutive fours
Sample Run 2
Enter row size: 6
Enter column size: 7
0 1 0 3 1 6 1
0 1 6 8 6 0 1
5 6 2 1 8 2 9
6 5 6 1 1 9 1
1 3 6 1 4 0 7
5 5 5 3 4 0 7
The array does not have consecutive fours
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
using namespace std;
#include<vector>
bool isconsecutivefour( const vector<vector<int>> &values)
{
    int res = 0;
    for(int i = 0; i < values.size();i++)
    {
        for(int j = 0; j < values[i].size() - 3; j++)
        {
            if(values[i][j] == values[i][j+1] and values[i][j+1] == values[i][j+2] and values[i][j+2] == values[i][j+3])
            {
                res=1;
               
                break;
               
            }
            
        }
         if(res==1){
       
        break;}
    }
       
    if(res == 1) 
    return 1;
    
        for(int i = 0; i < values[0].size();i++)
        {
            int j;
            for(j = 0; j < values.size()-3; j++)
            {
                 if(values[j][i] == values[j+1][i] and values[j+1][i] == values[j+2][i] and values[j+2][i] == values[j+3][i])
                 {
                     res = 1;
                     break;
                 }
            }
            if(res == 1){
              break;}
        }
    
    
    if(res == 1)
    return 1;  
    else
    return 0;  

}
int main() {
    int r,c;
    cout << "Enter row size: " ;
    cin >> r;
    cout << endl;
    cout << "Enter column size: ";
    cin >> c;
    cout << endl;
    
     vector<vector<int>> values(r, vector<int>(c,0));
                int x;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0;j < c; j++)
        {

            cin>>x;
            values[i][j]=x;
        }
    }
    bool res;
     res = isconsecutivefour(values);
    if(res == 1)
      cout << "The array has consectutive fours" << endl;
    else 
      cout << "The array does not have consectutive fours" << endl;
    
    return 0;
}
