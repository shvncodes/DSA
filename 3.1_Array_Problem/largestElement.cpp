#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// TC: O(n), SC:O(1)
int findLargestElement(vector<int> arr) {
    int max = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i <size; i++) {
        cin>>arr[i];
    }

    cout<<findLargestElement(arr);

    return 0;
}