// Bubble Sort implementation in C++

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Before Sorting: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    bubbleSort(arr);

    cout << "After Sorting: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}