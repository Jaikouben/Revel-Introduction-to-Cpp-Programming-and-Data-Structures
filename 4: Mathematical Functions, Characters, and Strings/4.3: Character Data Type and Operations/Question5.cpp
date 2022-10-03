/*
Assume that x is a char variable that has been declared and already given a value. Write an expression whose value is true if and only if x is alphanumeric, that is either a letter or a decimal digit.
*/

(x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9')
