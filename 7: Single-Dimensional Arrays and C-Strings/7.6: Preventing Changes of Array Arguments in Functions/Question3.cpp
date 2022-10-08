/*
Write the definition of a function, isReverse, whose first two parameters are arrays of integers of equal size, and whose third parameter is an integer indicating the size of each array.
The function returns true if and only if one array is the reverse of the other. ("Reverse" here means same elements but in reverse order.)
*/

bool isReverse (int one[], int two[], int size)
{
    int matches=0;
    for (int k=0; k<size; k++)
    {
        if (one[k] == two[size-k-1])
        {
            matches++;
        }
    }
    if (matches==size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
