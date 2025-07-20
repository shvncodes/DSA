#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int optimalSolution(vector<int>& nums) {
    int n = nums.size();
    int maxSum = nums[0];
    int currSum = nums[0];
    
    for(int i = 1; i < n; i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int bruteForce(vector<int>& nums) {
    int n = nums.size();
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            ans = max(ans, sum);
        }
    }

    return ans;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    // cout<<bruteForce(nums);   // SC: O(1)  TC: O(n^2)

    cout<<optimalSolution(nums);   // SC: O(1)  TC: O(n)

    return 0;
}