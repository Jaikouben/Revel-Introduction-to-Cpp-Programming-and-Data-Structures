/*
(Anagrams)
Write a function that checks whether two words are anagrams. Two words are anagrams if they contain the same letters in any order. For example, “silent” and “listen” are anagrams.
The header of the function is as follows:
bool isAnagram(const string& s1, const string& s2)
Write a test program that prompts the user to enter two strings and checks whether they are anagrams.
Sample Run 1
Enter a string s1: silent
Enter a string s2: listen
silent and listen are anagrams
Sample Run 2
Enter a string s1: split
Enter a string s2: lisp
split and lisp are not anagrams
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html.
*/

#include <iostream>
#include <string>
using namespace std;

// Method for checking to see if strings are an anagram
bool isAnagram(const string &s1, const string &s2) {
    if (s1.length() == s2.length()) {
        int c1, c2;
        for (int i = 0; i < s1.length(); ++i) {
            c1 = 0;
            for (int j = 0; j < s1.length(); ++j) {
                if (s1[i] == s1[j]) {
                    c1++;
                }
            }
            c2 = 0;
            for (int j = 0; j < s2.length(); ++j) {
                if (s1[i] == s2[j]) {
                    c2++;
                }
            }
            if (c1 != c2) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    string s1, s2;
    cout << "Enter a string s1: ";
    cin >> s1;
    cout << "Enter a string s2: ";
    cin >> s2;
  
    if (isAnagram(s1, s2)) 
    {
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    } 
    else 
    {
        cout << s1 << " and " << s2 << " are not anagrams" << endl;
    }
    return 0;
}
