// Check if a number is a palindrome using recursion

#include <iostream>
using namespace std;

bool isPalindrome(int num, int& temp) {
    if (num == 0) {
        return true;
    }

    int lastDigit = num % 10;
    temp = temp * 10 + lastDigit; 

    return isPalindrome(num / 10, temp);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int temp = 0; 
    if (isPalindrome(num, temp) && temp == num) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}