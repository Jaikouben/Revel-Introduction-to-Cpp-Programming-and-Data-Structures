/*
Online Book Merchants offers premium customers 1 free book with every purchase of 5 or more books and offers 2 free books with every purchase of 8 or more books. It offers regular customers 1 free book with every purchase of 7 or more books, and offers 2 free books with every purchase of 12 or more books.
Write a statement that assigns freeBooks the appropriate value based on the values of the bool variable isPremiumCustomer and the int variable nbooksPurchased. Assign 0 to freeBooks if no free books are offered. Assume the variables freeBooks, isPremiumCustomer, and nbooksPurchased are already declared.
*/

freeBooks = 0;

if (isPremiumCustomer == true && nbooksPurchased >= 5 && nbooksPurchased < 8)
    freeBooks = 1;
else
{
    if (isPremiumCustomer == true && nbooksPurchased >= 8)
        freeBooks = 2;
    if (isPremiumCustomer == false && nbooksPurchased >= 7 && nbooksPurchased < 12)
        freeBooks = 1;
    if (isPremiumCustomer == false && nbooksPurchased >= 12)
        freeBooks = 2;
}
