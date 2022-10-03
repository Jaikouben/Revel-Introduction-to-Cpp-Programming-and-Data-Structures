/*
Given that two int variables, total and amount, have been declared, write a loop that reads integers into amount and adds all the non-negative values into total. The loop terminates when a value less than 0 is read into amount. Don't forget to initialize total to 0.
*/

total = 0;
do 
{
    cin >> amount;
    if (amount > 0)
        total += amount;    
}
while (amount >= 0)
