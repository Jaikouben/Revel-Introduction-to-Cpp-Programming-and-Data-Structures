/*
Given two 2x3 (2 rows, 3 columns) arrays of int, x1 and x2, both already initialized, two int variables, i and j, and a bool variable x1Rules.
Write the code that is necessary for x1Rules to be true if and only if every element in x1 is bigger than its corresponding element in x2 and is false otherwise.
*/

x1Rules = true;
for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
        if (x1[i][j] <= x2[i][j])
        {
            x1Rules = false;
            break;
        }
