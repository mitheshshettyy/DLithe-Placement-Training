// Zig-Zag sum a Matrix

#include <iostream>
#include <vector>
using namespace std;

vector<int> zigZagElements(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<int> res;

    // First row
    for (int j = 0; j < n; j++) {
        res.push_back(mat[0][j]);
    }

    // Middle diagonal
    for (int i = 1; i < n - 1; i++) {
        res.push_back(mat[i][n - 1 - i]);
    }

    // Last row
    for (int j = 0; j < n; j++) {
        res.push_back(mat[n - 1][j]);
    }

    return res;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    vector<int> res = zigZagElements(mat);

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}