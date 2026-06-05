// Check if a string is a palindrome using recursion

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str, int left, int right) {
    // Base case: If the left index is greater than or equal to the right index, it's a palindrome
    if (left >= right) {
        return true;
    }
    
    // Check if the characters at the current indices are the same
    if (str[left] != str[right]) {
        return false; // Not a palindrome
    }
    
    // Recursive case: Move towards the center
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