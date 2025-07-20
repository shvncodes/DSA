#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int x) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
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

    int x;
    cout<<"Enter the element: ";
    cin>>x;

    cout<<linearSearch(arr, x);

    return 0;
}