/*
The variables xp and yp have both been declared as pointers to int, and have been assigned values.
Write the code to exchange the two int values pointed by xp and yp.
(so that after the swap xp still points at the same location, but it now contains the int value originally contained in the location pointed to by yp; and vice versa-- in other words, in this exercise you are swapping the ints, not the pointers).
Declare any necessary variables.
*/

int temp;
temp = *xp;
*xp = *yp;
*yp = temp;
