/*
Reversing the elements of an array involves swapping the corresponding elements of the array: the first with the last, the second with the next to the last, and so on, all the way to the middle of the array.
Given an array a, an int variable n containing the number of elements in a, and two other int variables, k and temp, write a loop that reverses the elements of the array.
Do not use any other variables besides a, n, k, and temp.
*/

for (int k = 0; k < n / 2; k++){
    temp = a[k];
    a[k] = a[n - k - 1];
    a[n - k - 1]=temp;
}
