// Question 1 : Given an integer array nums, return true if any value appears at least
// twice in the array, and return false if every element is distinct.

// Examples :
// Input: nums = [1,2,3,4]
// Output: false
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include <iostream>
using namespace std;

bool checkFreq(int *nums, int n){
    int seen[100000] = {0};
    for(int i = 0; i < n; i++){
        if (seen[nums[i]] == 0){
            seen[nums[i]] = nums[i];
        } else {
            return true;
        }
    }
    return false;
}

int main(){
    // int nums[] = {1,3,4,3,2,4,2};  // 1
    int nums[] = {1,2,3,4};           // 0 
    int n = sizeof(nums) / sizeof(int);
    cout << checkFreq(nums, n);
    return 0;
}