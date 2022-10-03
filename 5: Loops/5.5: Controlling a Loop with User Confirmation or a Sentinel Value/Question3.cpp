/*
Write a loop that reads strings from console input where the string is either "duck" or "goose". The loop terminates when "goose" is read in. After the loop, your code should print out the number of "duck" strings that were read. 
*/

string input = "";
int duckCount = 0;
while (input != "goose")
{
    cin >> input;
    if (input == "duck")
        duckCount++;
}
cout << duckCount;
