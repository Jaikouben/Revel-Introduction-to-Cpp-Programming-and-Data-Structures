/*
Assume a class Window with accessor function getWidth that accepts no parameters and returns an int. Assume further an array of 3 Window elements named winarr, has been declared and initialized. Write a sequence of statements that prints out the width of the widest window in the array.
*/

int max_width = winarr[0].getWidth();
if (winarr[0].getWidth()==winarr[1].getWidth() && winarr[1].getWidth() == winarr[2].getWidth()) cout << "0";
    if (max_width < winarr[1].getWidth()) cout<<winarr[1].getWidth();
        if (max_width < winarr[2].getWidth()) cout<<winarr[2].getWidth();
            if (max_width>winarr[1].getWidth() && max_width>winarr[2].getWidth()) cout << winarr[0].getWidth();
