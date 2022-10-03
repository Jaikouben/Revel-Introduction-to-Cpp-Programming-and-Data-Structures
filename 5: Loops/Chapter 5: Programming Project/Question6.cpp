/*
(Check password)
Some websites impose certain rules for passwords. Suppose the password rules are as follows:
- A password must have at least eight characters.
- A password must consist of only letters and digits.
- A password must contain at least two digits.
Write a program that prompts the user to enter a password and displays valid password if the rules are followed or invalid password otherwise.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidLength(string password){
    if(password.length() >= 8){
        return true;
    }

    else{
        return false;
    }
}

bool hasOnlyLetterAndDigits(string password){
    for(int index = 0; index < password.length(); index++){
        if(!isalnum(password[index])){
            return false;
        }
    }
    return true;
}

bool hasAtleast2Digits(string password){
    int numDigits = 0;
    
    for (int index = 0; index < password.length(); index++){
        if(isdigit(password[index])){
            numDigits++;
        }
    }

    if (numDigits >= 2){
       return true;
    }

    else {
        return false;
    }
}

int main(){
    string password;
    bool isValid = true;

    cout << "Enter a password: ";
    getline(cin, password);

    isValid = isValidLength(password) && hasOnlyLetterAndDigits(password) && hasAtleast2Digits(password);

    if (isValid == false){
        cout << "invalid password" << endl;
    }

    else {
        cout << "valid password" << endl;
    }
}
