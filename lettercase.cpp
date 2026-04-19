#include <iostream>
#include <cctype> //for isupper and islower functions
using namespace std;

string checkcase(char ch) { //function to check if the letter is uppercase or lowercase
    if (isupper(ch)) { //if the letter is uppercase
        return "uppercase";
    } else if (islower(ch)) {  //if the letter is lowercase
        return "lowercase";
    } else {
        return "not a letter. please enter a letter.";
    }
}

int main() {
    char Letter;
    cout << "Enter a letter: ";
    cin >> Letter;
    
    string result = checkcase(Letter);
    cout << "This letter is " << result << ", " << Letter << "." << endl;
    
    return 0;
}