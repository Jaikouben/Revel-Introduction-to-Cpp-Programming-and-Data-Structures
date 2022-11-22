/*
Objects of the BankAccount class require a name (string) and a social security number (string) be specified (in that order) upon creation.
Declare two strings corresponding to a name and a social security number and read values into them from standard input (in that order) using cin >>.
Use these values to declare an object of type BankAccount named newAccount.
*/

string name;
string social;
cin >> name >> social;
BankAccount newAccount(name, social);
