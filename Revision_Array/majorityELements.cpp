#include<iostream>
#include<vector>
#include<map>
using namespace std;

int optimalSolution(vector<int>& nums) {
    int n = nums.size();

    int cnt = 1;
    int prev = nums[0];
    for(int i = 1; i < n; i++) {
        if(nums[i] == prev) cnt++;
        else {
            cnt--;
            if(cnt == 0)  {
                prev = nums[i];
                cnt = 1;
            }
        }
    }

    return prev;
}

int betterSolution(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n, 0);
    for(int i = 0; i < n; i++) freq[nums[i]]++;
    
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, freq[nums[i]]);

    for(int i = 0; i < n; i++) if(freq[nums[i]] == ans) return nums[i];

    return 0;
}

int bruteForce(vector<int>& nums) {
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j]) cnt++;
        }
        if(cnt > (n/2)) return nums[i];
    }

    return -1;
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

    // cout<<bruteForce(nums);   // SC: O(1)  TC: O(N^2)

    // cout<<betterSolution(nums);   // SC: O(N)  TC: O(N)

    cout<<optimalSolution(nums);   // SC: O(1)  TC: O(n)

    return 0;
}