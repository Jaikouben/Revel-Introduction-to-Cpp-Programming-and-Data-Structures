/*
Write the definition of a function named averager that receives a double parameter and return-- as a double -- the average value that it has been passed so far.
So, if you make these calls to averager: averager(5.0), averager(15.0), averager(4.3), the values returned will be (respectively): 5.0, 10.0, 8.1.
Hint: use a static local variable to track the average of all the numbers been called.
*/

double averager (const double &wrongNumber)
{
    static double threeSum = 0.0;
    static size_t bodyCount = 0;
    bodyCount++;
    threeSum += wrongNumber;

    return threeSum / bodyCount;
}
