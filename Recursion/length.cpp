// Program to determine length of a string using recursion

#include <iostream>
using namespace std;

int stringLength(const string& str, int index) {
    if (index == str.length()) {
        return 0; 
    }
    return 1 + stringLength(str, index + 1); 
}   

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int length = stringLength(input, 0);
    cout << "Length of the string: " << length << endl;

    return 0;
}