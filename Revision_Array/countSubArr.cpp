#include<iostream>
#include<vector>
#include<set>
#include<climits>
using namespace std;

int solution(vector<int>& nums, int k) {
    int n = nums.size();
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        int xOR = nums[i];
        if(xOR == k) cnt++;
        for(int j = i+1; j < n; j++) {
            xOR ^= nums[j];
            if(xOR == k) cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin>>nums[i];

    int k;
    cout<<"Enter the element having XOR: ";
    cin>>k;

       
    
    cout<<solution(nums, k);   //SC:O(1)    TC:O(n^2)

    return 0;
}