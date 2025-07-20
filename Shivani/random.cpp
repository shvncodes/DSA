#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    vector<int> nums = {1,1,2,2,1,1,1,1,2,2,1,1};
    int n = nums.size();
    map<int, int> map;
    vector<int> ans;

    // if(n < 2) {
    //     return nums;
    // }

    int mini = ((n/3) + 1);

    for(int i = 0; i < n; i++) {
        map[nums[i]]++;
    }

    for(auto it : map) {
        // cout<<it.second<<" ";
        if(it.second >= mini) {
            // ans.push_back(it.first);
            cout<<it.first<<" ";
        }
    }
    return 0;
}