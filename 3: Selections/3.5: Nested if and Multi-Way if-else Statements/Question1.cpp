/*
Write a multi-way if statement that adds 1 to the variable minors if the variable age is less than 18, adds 1 to the variable adults if age is 18 through 64, and adds 1 to the variable seniors if age is 65 or older.
*/

if (age < 18)
    minors += 1;
if (65 > age && age >= 18)
    adults += 1;
if (age >= 65)
    seniors += 1;
