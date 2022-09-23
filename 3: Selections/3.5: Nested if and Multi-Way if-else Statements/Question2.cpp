/*
Write a multi-way if statement that compares the double variable pH with 7.0 and makes the following assignments to the bool variables neutral, base, and acid:
• false, false, true if pH is less than 7
• false, true, false if pH is greater than 7
• true, false, false if pH is equal to 7
*/

if (pH < 7.0)
{
    neutral = false;
    base = false;
    acid = true;
}
else
{
    if (pH > 7)
    {
        neutral = false;
        base = true;
        acid = false;
    }
    if (pH == 7)
    {
        neutral = true;
        base = false;
        acid = false;
    }
}
