/*
Given two 3x3 arrays of integers, x1 and x2, write the code needed to copy every value from x1 to its corresponding element in x2.
*/

for(int r = 0; r < 3; r++)
{
    for(int c = 0; c < 3; c++)
    {
        x2[r][c] = x1[r][c];
    }
}
