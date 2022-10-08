/*
Write the definition of a function named max that receives an int parameter and returns the largest value that it has been called with so far.
So, if you make these calls to max：max(5), max(3), max(12), max(4), the values returned will be (respectively): 5, 5, 12, and 12.
Hint: use a static local variable to track the largest number that has ever been called.
*/

int max(int iInput)
{
    static int iHighest=0;
    if (iInput>iHighest)
        iHighest=iInput;
    return iHighest;
}
