/*
Given the availability of an ifstream object named input, write the code to read an integer into a variable datum that has already been declared from a file called rawdata.
Assume that reading that one integer is the only operation you will carry out with this file.
(Note: write just the statements, do not define a main function.)
*/

input.open("rawdata");
input >> datum;
input.close();
