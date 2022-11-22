/*
Objects of the Window class require a width(int) and a height(int) be specified (in that order) upon creation.
Declare two integers corresponding to a width and a length and read values into them from standard input (in that order).
Use these values to declare an object of type Window named newWindow.
*/

int width, length;
cin >> width >> length;
Window newWindow (width, length);
