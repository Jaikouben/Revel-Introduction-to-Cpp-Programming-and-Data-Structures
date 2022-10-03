/*
Given the availability of an ofstream object named output, write the code to output the string "3.14159" into a file called pi.
(Do not define a main function.)
*/

output.open("pi");
output << "3.14159";
output.close();
