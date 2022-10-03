/*
Declare k, d, and s so that they can store an integer, a real number, and a small word (without spaces).
Use these variables to first read in an integer, a real number, and a small word and print them out in reverse order (i.e., the word, the real, and then the integer) all on the same line, separated by exactly one space from each other.
Then, on a second line, print them out in the original order (the integer, the real, and the word), separated again by exactly one space from each other.
*/

int k;
double d;
char s[10];

cin >> k >> d >> s;
cout << s << " " << d << " " << k << "\n" << k << " " << d << " " << s;
