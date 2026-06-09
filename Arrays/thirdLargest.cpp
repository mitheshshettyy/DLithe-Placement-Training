//Program to find the third largest element in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[20];
    int largest = INT16_MIN;
    int secondLargest = INT16_MIN;
    int thirdLargest = INT16_MIN;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] != secondLargest && arr[i] > thirdLargest) {
            thirdLargest = arr[i];
        }
    }

    if (thirdLargest == INT16_MIN)
        cout << "No third largest element exists";
    else
        cout << "Third Largest = " << thirdLargest;

    return 0;
}

