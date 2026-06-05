// Program to reverse a string using recursion

#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    if (str.empty()) {
        return "";
    } else {
        return str.back() + reverseString(str.substr(0, str.size() - 1));
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Reversed string: " << reverseString(input) << endl;
    return 0;
}