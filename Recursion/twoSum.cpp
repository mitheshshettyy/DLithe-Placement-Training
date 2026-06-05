// Program to find two numbers in an array that add up to a target sum using recursion

#include <iostream>
#include <vector>   
using namespace std;

bool twoSum(const vector<int>& nums, int target, int index, vector<int>& result) {
    if (index >= nums.size()) {
        return false;
    }
    
    for (int i = index + 1; i < nums.size(); i++) {
        if (nums[index] + nums[i] == target) {
            result.push_back(nums[index]);
            result.push_back(nums[i]);
            return true;
        }
    }
    
    return twoSum(nums, target, index + 1, result);
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result;
    if (twoSum(nums, target, 0, result)) {
        cout << "Two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to " << target << endl;
    }
    
    return 0;
}