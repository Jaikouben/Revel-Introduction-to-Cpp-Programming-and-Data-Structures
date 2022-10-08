/*
Write the definition of a function printArray, which has two parameters.
The first parameter is an array of ints and the second is an int, the number of elements in the array.
The function does not return a value.
The function prints out each element of the array, on a line by itself, in the order the elements appear in the array, and does not print anything else.
*/

void printArray (int s[], int n){
    for (int k=0; k<n; k++)
    {
        cout << s[k] << endl;
    }
}
