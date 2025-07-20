#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>& nums) {
    int n = nums.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) if(nums[i] > 2*nums[j]*1LL) cnt++;
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


    cout<<solution(nums);

    return 0;
}