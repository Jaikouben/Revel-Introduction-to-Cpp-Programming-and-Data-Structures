/*
Given three variables, k, m, n, of type int that have already been declared and initialized, write some code that prints each of them in a 9 position field on the same line.
For example, if their values were 27, 987654321, -4321,
the output would be:
|xxxxxxx27987654321xxxx-4321
NOTE: The vertical bar, |, on the left above represents the left edge of the print area; it is not to be printed out. Also, we show x in the output above to represent spaces-- your output should not actually have xs!
*/

cout << setw (9) << k << setw (9) << m << setw (9) << n ;
