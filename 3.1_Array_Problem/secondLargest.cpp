#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    // TC:O(N), SC:O(1) 
int findSecondLargestElement(vector<int> arr) {
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]!= max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<findSecondLargestElement(arr);

    return 0; 
}