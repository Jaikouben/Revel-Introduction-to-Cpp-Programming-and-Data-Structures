/*
Clunker Motors Inc. is recalling all vehicles from model years 1995-1998 and 2004-2006. A bool variable named norecall has been declared.
Given an int variable modelYear, write a statement that assigns true to norecall if the value of modelYear does not fall within the two recall ranges and assigns false otherwise.
Do not use an if statement in this exercise!
*/

norecall = ((modelYear >= 1995 && modelYear <= 1998) || (modelYear >= 2004 && modelYear <= 2006)) ? false : true;
