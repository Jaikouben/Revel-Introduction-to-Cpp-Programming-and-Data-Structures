/*
You are given a 6x8 (6 rows, 8 columns) array of int, x, already initialized and three int variables: max, i, and j.
Write the code so that max will have the largest value in the array x.
Don’t forget the case when all the numbers in the matrix may be negative.
*/

max = x[0][0];
for(i = 0; i < 6; i++){
    for(j = 0; j < 8; j++)
    {
        if(x[i][j] > max)
            max = x[i][j];
    }
}
