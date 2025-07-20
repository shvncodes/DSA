#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int optimalSolution(vector<int>& nums) {
    int n = nums.size();
    int buy = nums[0];
    int profit = 0;

    for(int i = 1; i < n; i++) {
        if(nums[i] < buy) buy = nums[i];
        profit = max(profit, nums[i] - buy);
    }

    return profit;
}

int bruteForce(vector<int>& nums) {
    int n = nums.size();
    int profit = 0;
    for(int i = n-1; i > -1; i--) {
        for(int j = 0; j < i; j++) {
            int diff = nums[i] - nums[j];
            profit = max(profit, diff);
        }
    }

    return profit;
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