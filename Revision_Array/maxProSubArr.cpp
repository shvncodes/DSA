#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int solution(vector<int>& nums) {
    int n = nums.size();        
    long long pro = 1;
    long long maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        pro = nums[i];
        maxi = max(maxi, pro);
        for(int j = i+1; j < n; j++) {
            pro *= nums[j];
            maxi = max(maxi, pro);
        }
    }

    return maxi;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin>>nums[i];


    cout<<solution(nums);

    return 0;
}