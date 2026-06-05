// Check if a string is a palindrome using recursion

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str, int left, int right) {
    if (left >= right) {
        return true;
    }
    
    if (str[left] != str[right]) {
        return false; 
    }
    
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }
    
    return 0;
}