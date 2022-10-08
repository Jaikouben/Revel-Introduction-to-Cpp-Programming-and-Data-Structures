/*
Write the definition of a function named newbie that receives no parameters and returns true the first time it is invoked (when it is a "newbie"), and that returns false every time that it is invoked after that.
*/

bool newbie(void)
{
    static bool x = true ;
    bool t = x;
    x = false;
    return t;
}
