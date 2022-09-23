/*
Assume that day is an int variable whose value is 1 or 2 or ... or 7.
Write an expression whose value is "sun" or "mon" or "tue" or "wed" or "thu" or "fri" or "sat" based on the value of day.
*/

((day==1)?"sun": ((day==2)?"mon": ((day==3)?"tue": ((day==4)?"wed": ((day==5)?"thu": ((day==6)?"fri": ((day==7)?"sat": "invalid")))))))
