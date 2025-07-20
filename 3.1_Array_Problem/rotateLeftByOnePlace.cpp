#include<iostream>
#include<vector>
using namespace std;

// TC:O(N) , SC:O(1)
void leftRotate(vector<int> arr) {
    int n = arr.size();
    int temp = arr[0];
    for(int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
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

    leftRotate(arr);
    
    return 0;
}