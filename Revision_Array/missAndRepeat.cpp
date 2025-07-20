#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void optimalSolution1(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2, -1);
    
    long long totalSum = (n*(n+1)) / 2;
    long long totalSqSum = ((n*(n+1)) * ((2*n)+1)) / 6;

    long long sum = 0;
    long long sum2 = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
        sum2 += ((long long)nums[i] * (long long)nums[i]);
    }

    long long a = sum - totalSum;
    long long b = (sum2 - totalSqSum) / a;
    long long x = (a+b) / 2;
    long long y = x - a;
    
    ans[0] = (int)x;
    ans[1] = (int)y;
    
    for(int i = 0; i < 2; i++) cout<<ans[i]<<" ";
}

void betterSolution(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2, -1);
    vector<int> freq(n+1, 0);

    for(int i = 0; i < n; i++) freq[nums[i]]++;

    for(int i = 1; i <= n; i++) {
        if(freq[i] > 1) ans[0] = i;
        if(freq[i] < 1) ans[1] = i;
        if(ans[0] != -1 && ans[1] != -1) break;
    }
    
    for(int i = 0; i < 2; i++) cout<<ans[i]<<" ";
}

void bruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2, -1);

    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) if(nums[j] == i) cnt++;

        if(cnt > 1) ans[0] = i;  // Repeating Number
        if(cnt < 1) ans[1] = i; // Missing Number
        if(ans[0] != -1 && ans[1] != -1) break;
    }

    for(int i = 0; i < 2; i++) cout<<ans[i]<<" ";
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin>>nums[i];

    // bruteForce(nums);    // SC: O(1)    TC: O(n^2)

    // betterSolution(nums);   // SC: O(n)    TC: O(n)

    optimalSolution1(nums);   // SC: O()    TC: O()

    return 0;
}