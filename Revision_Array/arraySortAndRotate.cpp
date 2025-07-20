#include<iostream>
#include<vector>
using namespace std;

bool arraySortAndRotated(vector<int> &arr) {
    int n = arr.size();

    int count = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) count++;
        if(count > 1) return false;
    }

    if(count == 1 && arr[0] < arr[n-1]) return false;

    return true;
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

    cout<<arraySortAndRotated(arr);

    return 0;
}