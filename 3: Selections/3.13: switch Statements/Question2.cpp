/*
In the Happy Valley School System, children are classified by age as follows:
• less than 2, ineligible
• 2, toddler
• 3-5, early childhood
• 6-7, young reader
• 8-10, elementary
• 11 and 12, middle
• 13, impossible
• 14-16, high school
• 17-18, scholar
• greater than 18, ineligible
Given an int variable age, write a switch statement that prints out the appropriate label from the above list based on age.
*/

switch (age) {
    case 1: cout << "less than 2, ineligible"; break;
    case 2: cout << "toddler"; break;
    case 3: cout << "early childhood"; break;
    case 4: cout << "early childhood"; break;
    case 5: cout << "early childhood"; break;
    case 6: cout << "young reader"; break;
    case 7: cout << "young reader"; break;
    case 8: cout << "elementary"; break;
    case 9: cout << "elementary"; break;
    case 10: cout << "elementary"; break;
    case 11: cout << "middle"; break;
    case 12: cout << "middle"; break;
    case 13: cout << "impossible"; break;
    case 14: cout << "high school"; break;
    case 15: cout << "high school"; break;
    case 16: cout << "high school"; break;
    case 17: cout << "scholar"; break;
    case 18: cout << "scholar"; break;
    default: cout << "ineligible"; break;
}
