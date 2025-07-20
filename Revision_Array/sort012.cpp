#include<iostream>
#include<vector>
using namespace std;

void betterSolution2(vector<int>& nums) {
    int n = nums.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) cnt0++;
        else if(nums[i] == 1) cnt1++;
        else cnt2++;
    }

    for(int i = 0; i < cnt0; i++) nums[i] = 0;
    for(int i = cnt0; i < cnt0+cnt1; i++) nums[i] = 1;
    for(int i = cnt0+cnt1; i < n; i++) nums[i] = 2;

    for(int i = 0; i < n; i++) cout<<nums[i]<<" ";

}

void optimalSolution(vector<int>& nums) {
    int n = nums.size();
    if(n <= 1) return;

    int i = 0, j = 0, k = n-1;
    while(j <= k) {
        if(nums[j] == 0) {
            swap(nums[i], nums[j]);
            i++, j++;
        } else if(nums[j] == 1) j++;
        else {
            swap(nums[j], nums[k]);
            k--;
        }
    }
    
    for(int i = 0; i < n; i++) cout<<nums[i]<<" ";

}

void betterSolution1(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(3,0);

    for(int i = 0; i < n; i++) if(nums[i] == 0) freq[nums[i]]++;

    for(int i = 0, j = 0; i < n; i++) {
        if(freq[j] > 0) {
            nums[i] = j;
            freq[j]--;
        } else {
            j++;
            if(freq[j] > 0) nums[i] = j;
            else {
                j++; 
                if(freq[j] > 0) nums[i] = j;
            }   
        }
    }

    for(int i = 0; i < n; i++) cout<<nums[i]<<" ";

}

void bruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<int> temp;

    for(int i = 0; i < n; i++) if(nums[i] == 0) temp.push_back(nums[i]);
    for(int i = 0; i < n; i++) if(nums[i] == 1) temp.push_back(nums[i]);
    for(int i = 0; i < n; i++) if(nums[i] == 2) temp.push_back(nums[i]);

    for(int i = 0; i < temp.size(); i++) cout<<temp[i]<<" ";

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

    // bruteForce(nums);   // SC: O(N)  TC: O(N)

    // betterSolution1(nums);   // SC: O(1)  TC: O(N)

    // betterSolution2(nums);   // SC: O(1)  TC: O(N)

    optimalSolution(nums);   // SC: O(1)  TC: O(N)

    return 0;
}