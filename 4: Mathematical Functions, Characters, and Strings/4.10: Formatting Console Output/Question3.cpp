/*
Assume that x is a double variable that has been given a value. Write a statement that prints it out with exactly three digits to the right of the decimal point no matter what how big or miniscule its value is.
*/

cout << setprecision(3) << fixed << x;
