/*
Write the implementation (.cpp file) of the Counter class of the previous exercise.
The full specification of the class is:
A data member counter of type int.
A data member named counterID of type int.
A static int data member named nCounters that is initialized to 0.
A constructor that takes an int argument and assigns its value to counter. It also adds one to the static variable nCounters and assigns the (new) value of nCounters to counterID.
A function called increment that accepts no parameters and returns no value. increment adds one to the instance variable counter.
A function called decrement that accepts no parameters and returns no value. decrement subtracts one from the counter.
A function called getValue that accepts no parameters and returns an int. It returns the value of the instance variable counter.
A function named getCounterID that accepts no parameters and returns an int. getCounterID returns the value of the data member counterID.
Don’t include the header file in this exercise, because REVEL assumes that the header and implementation are placed in the same file.
Note: Don't use the #include "Counter.h", because REVEL assumes that your Counter header is in the same file with the implementation. You need to initialize static data member nCounters as
int Counter::nCounters = 0;
This line has to be put as the first line in your code.
*/

int Counter::nCounters=0;
Counter::Counter(int value)
{
    counter = value;
    nCounters=nCounters+1;
    counterID = nCounters;
}
void Counter::increment()
{
    counter++;
}
void Counter::decrement()
{
    counter--;
}
int Counter::getValue()
{
    return counter;
}
int Counter::getCounterID()
{
    return counterID;
}
