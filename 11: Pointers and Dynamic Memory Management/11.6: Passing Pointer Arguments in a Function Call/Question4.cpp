/*
Write the definition of a function divide that takes four arguments and returns no value. The first two arguments are of type int. The last two arguments arguments are pointers to int and are set by the function to the quotient and remainder of dividing the first argument by the second argument. The function does not return a value.
The function can be used as follows:
int numerator = 42, denominator = 5, quotient, remainder;
divide(numerator, denominator, &amp;quotient, &remainder); /* quotient is now 8 and remainder is now 2 
*/

void divide (int numerator, int denominator, int *quotient, int *remainder)
{
    *quotient = (int) (numerator/denominator);
    *remainder = numerator % denominator;
}
