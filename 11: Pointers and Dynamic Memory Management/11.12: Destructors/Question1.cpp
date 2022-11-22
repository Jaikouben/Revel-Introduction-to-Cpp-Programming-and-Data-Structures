/*
Assume the existence of a class named Window with functions named close and freeResources, both of which accept no parameters and return no value. Write a destructor for the class that invokes close followed by freeResources.
Note: Don’t use the Window:: qualification in your code, because REVEL assumes that your code will be inserted directly in the Window class definition as an inline implementation.
*/

~Window()
{
    close();
    freeResources();
};
