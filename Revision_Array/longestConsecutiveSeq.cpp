#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;

int optimalSolution(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;

    int longest = 1;
    unordered_set<int> set;
    for(int i = 0; i < n; i++) set.insert(nums[i]);

    for(int it: set) {
        if(set.find(it-1) == set.end()) {
            int count  = 1;
            int x = it;
            while(set.find(x+1) != set.end()) {
                x += 1;
                count += 1;
            }
            longest = max(longest, count);
        }
    }

    return longest;
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

    cout<<optimalSolution(nums);   // SC: O(n)  TC: O(n)

    return 0;
}