#include<iostream>
#include<vector>
using namespace std;

int removeDuplicateFromSortedArray(vector<int> &arr) {
    int n = arr.size();

    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }    
    }

    return j+1;
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

    cout<<removeDuplicateFromSortedArray(arr);

    return 0;
}