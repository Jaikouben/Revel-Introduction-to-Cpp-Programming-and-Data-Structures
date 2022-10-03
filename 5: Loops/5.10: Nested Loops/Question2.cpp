/*
Write a loop that displays all possible combinations of two letters where the letters are 'a', or 'b', or 'c', or 'd', or 'e'.
The combinations should be displayed in ascending alphabetical order:
aa
ab
ac
ad
ae
ba
bb
...
ee
*/

for (char outerChar = 'a'; outerChar <= 'e'; outerChar++)
{
    for (char innerChar = 'a'; innerChar <= 'e'; innerChar++)
    {
        cout << outerChar << innerChar << "\n";
    }
}
