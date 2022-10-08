/*
Write the definition of a function signOf that receives an int parameter and
returns -1 if the parameter is negative,
returns 0 if the parameter is 0 and
returns 1 if the parameter is positive.
So, if the parameter's value is 7 or 803 or 141 the function returns 1.
But if the parameter's value is -22 or -57, the function returns -1.
And if the parameter's value is 0, the function returns 0.
*/

int signOf(int a)
{
    if (a < 0)
        return -1;
    if (a == 0)
        return 0;
    if (a > 0)
        return 1;
}
