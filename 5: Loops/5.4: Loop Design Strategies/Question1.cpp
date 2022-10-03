/*
Given an int variable n that has been initialized to a positive value and, in addition, int variables k and total that have already been declared, use a while loop to compute the sum of the cubes of the first n counting numbers, and store this value in total.
Thus if n equals 4, your code should put 1*1*1 + 2*2*2 + 3*3*3 + 4*4*4 into total.
Use no variables other than n, k, and total.
Do not modify n. Don't forget to initialize k and total with appropriate values.
*/

total = 0;
k = 0;
while (k <= n)
{
    total += k * k * k;
    k++;
}
