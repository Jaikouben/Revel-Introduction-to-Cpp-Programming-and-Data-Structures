/*
Write the definition of a function printLarger, which has two int parameters and returns nothing. The function prints the larger value of the two parameters on a single line by itself. (For purposes of this exercise, the "larger" means "not the smaller".)
*/

void printLarger(int a, int b)
{
    if (a > b)
        cout << a << endl;
    else 
        cout << b << endl;
}
