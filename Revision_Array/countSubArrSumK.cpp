#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;

int solution(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0, count = 0;

    for(int i = 0; i < n; i++) {
        sum = nums[i];
        if(nums[i] == k) count++;

        for(int j = i+1; j < n; j++) {
            sum += nums[j];
            if(sum == k) count++;
        }
    }

    return count;
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

    int k;
    cout<<"Enter the sum of the subarray: ";
    cin>>k;

    cout<<solution(nums, k);   // SC: O(1)  TC: O(n^2)

    return 0;
}