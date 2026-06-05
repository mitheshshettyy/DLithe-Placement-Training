#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    char arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(isalpha(arr[i])) {  
            cout << arr[i] << " ";
        }
    }

    return 0;
}