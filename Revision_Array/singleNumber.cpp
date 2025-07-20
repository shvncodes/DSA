#include<iostream>
#include<vector>
using namespace std;

int optimalSolution(vector<int>& nums) {
    int n = nums.size();

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans ^= nums[i];
    }

    return ans;
}

int bruteForce(vector<int> &arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        bool isNumRepeated = false;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isNumRepeated = true;
                break;
            }
        }
        if(isNumRepeated == false) return arr[i];
    }
    return -1;
}

int main() {   
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<bruteForce(arr);

    // cout<<optimalSolution(arr);

    return 0;
}