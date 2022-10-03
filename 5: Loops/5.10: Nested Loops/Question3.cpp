/*
Given a char variable last that has been initialized to a lowercase letter, write a loop that displays all possible combinations of two letters in the range 'a' through last.
The combinations should be displayed in ascending alphabetical order:
For example, if last was initialized to 'c', the output should be:
aa
ab
ac
ba
bb
bc
ca
cb
cc
*/

for (char outterChar='a'; outterChar <=last; outterChar++)
{
    for (char innerChar='a'; innerChar <=last; innerChar++){
        cout << outterChar << innerChar << "\n";
    }
}
