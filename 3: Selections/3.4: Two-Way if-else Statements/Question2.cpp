/*
NOTE: in mathematics, the square root of a negative number is not real; in C++ therefore, passing such a value to the square root function is an error.
Given a double variable named areaOfSquare, write the code to read in a value, the area of some square, into areaOfSquare and print out the length of the side of that square.
HOWEVER: if any value read in is not valid input, just print the message "INVALID".
*/

cin >> areaOfSquare;
if (areaOfSquare >= 0)
    cout << sqrt(areaOfSquare);
else
    cout << "INVALID";
