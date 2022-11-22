/*
Assume the existence of a class GraphicProgram with a string member, executableName, and data member, windowPtr, of type Window* (where Window is also a class type).
Assume further that the Window class has a function called clone, that takes no parameters and returns a pointer to a new copy of the Window.
Write a copy constructor for the GraphicProgram class that uses the clone function to make a proper copy of the Window member (rather than simple member assignment).
The executableName member may be copied using simple member assignment.
Note: Don’t use the GraphicProgram:: qualification in your code, because REVEL assumes that your code will be inserted directly in the GraphicProgram class definition as an inline implementation.
*/

GraphicProgram(const GraphicProgram &a){
    executableName = a.executableName;
    windowPtr = a.windowPtr->clone();
}
