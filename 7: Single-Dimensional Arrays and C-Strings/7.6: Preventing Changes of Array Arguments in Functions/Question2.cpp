/*
Write the definition of a function named sumArray that receives two parameters:
an array of element type int and an int that contains the number of elements of the array.
The function returns the sum of the elements of the array as an int.
*/

int sumArray (int s[], int n)
{
    int sum=0;
    for(int k=0; k<n; k++)
    {
        sum += s[k];
    }
    return sum;
}
