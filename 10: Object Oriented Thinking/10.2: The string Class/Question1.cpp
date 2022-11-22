/*
Assume that an int variable pos, as well as the strings line and clause, have already been declared. Write a sequence of statements that finds the first comma in line, and assigns to clause the portion of line up to, but not including the comma.
*/

clause = line.substr(0, line.find(','));
