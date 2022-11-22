/*
The variable cp_arr has been declared as an array of 26 pointers to char.
Allocate 26 character values, initialized to the letters 'A' through 'Z' and assign their pointers to the elements of cp_arr (in that order).
*/

for(int i = 0; i < 26; i++)
{
    cp_arr[i] = new char;
    *(cp_arr[i]) = (char)(65 + i);
}
