/*
Write the header file (.h file) of a class Acc2 containing:
A data member named sum of type int.
A constructor accepting no parameters.
A function named getSum that accepts no parameters and returns an int.
*/

#ifndef ACC2_H
#define ACC2_H

class Acc2
{
    private:
        int sum;
    public:
        Acc2();
        int getSum();
};

#endif
