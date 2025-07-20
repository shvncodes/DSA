#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void solution(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    for(int i = 0; i < n; i++){
        if(cnt1 == 0 && nums[i] != el2) {
            cnt1 = 1;
            el1 = nums[i];           
        } else if(cnt2 == 0 && nums[i] != el1) {
            cnt2 = 1;
            el2 = nums[i];
        } else if(nums[i] == el1) cnt1++;
        else if(nums[i] == el2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == el1) cnt1++;
        if(nums[i] == el2) cnt2++;
    }

    if(cnt1 > (n/3)) ans.push_back(el1);
    if(cnt2 > (n/3)) ans.push_back(el2);

    for(int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
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

    solution(nums);   //SC: O(1)   TC:O(n)

    return 0;
}