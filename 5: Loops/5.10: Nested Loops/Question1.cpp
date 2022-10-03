/*
Assume that the int variables i, j and n have been declared, and n has been initialized. Write code that causes a "triangle" of asterisks to be output to the screen, i.e., n lines should be printed out, the first consisting of a single asterisk, the second consisting of two asterisks, the third consisting of three, etc.
The last line should consist of n asterisks.
Thus, for example, if n has value 3, the output of your code should be:
*
**
***
*/

for (i = 1; i <= n; i++)
{
    for (j = 1; j <= i; j++)
        cout << "*";
        cout << "\n";
}
