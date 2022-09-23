/*
Assume that credits is an int variable whose value is 0 or positive.
Write an expression whose value is "freshman" or "sophomore" or "junior" or "senior" based on the value of credits.
In particular:
if the value of credits is less than 30 the expression's value is "freshman"; 30-59 would be a "sophomore"; 60-89 would be "junior" and 90 or more would be a "senior".
*/

((credits < 30)?"freshman": ((credits < 60 && credits > 29)?"sophomore": ((credits < 90 && credits > 59)?"junior": ((credits > 89)?"senior": "invalid"))))
