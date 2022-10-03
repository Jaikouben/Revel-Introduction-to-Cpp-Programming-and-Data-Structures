/*
Given the availability of an ifstream object named indata and an ofstream object named outdata, write the code to read an integer from a file called currentsales and write twice its value into a file called projectedsales.
Assume that this is the extent of the input and output that this program will do.
*/

double sales=0.0;

indata.open("currentsales");
outdata.open("projectedsales");

indata >> sales;
outdata << sales * 2.0;

indata.close();
outdata.close();
