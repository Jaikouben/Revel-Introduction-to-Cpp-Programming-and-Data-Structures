/*
Write the definition of a function zeroIt, which is used to zero out a variable.
The function is used as follows:
int x = 5; zeroIt(&x); /* x is now equal to 0 
*/

void zeroIt(int *p)
{
     *p = 0;
     return;
}
