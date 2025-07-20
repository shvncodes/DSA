#include<iostream>
#include<vector>
using namespace std;

void rotatedArray(vector<int> &arr, int k) {
    int n = arr.size();

    if(n < 2) return;
    if(k > n) k = k % n;

    vector<int> temp;
    int x = n - k;
    for(int i = x; i < n; i++) {
        temp.push_back(arr[i]);
    }
    
    for(int i = 0; i < x; i++) {
        temp.push_back(arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout<<temp[i]<<" ";
    }
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

    int k;
    cout<<"Enter the steps to rotate the array: ";
    cin>>k;

    rotatedArray(arr, k);

    return 0;
}