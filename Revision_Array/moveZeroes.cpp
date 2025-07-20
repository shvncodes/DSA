#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int> &arr) {
    int n = arr.size();
    int i = 0;
    while(i < n && arr[i] != 0) i++;
    int j = i+1;
    while(j < n && arr[j] == 0) j++;

    while(i < j && j < n) {
        if(arr[i] == 0 && arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        } else {
            if(arr[i] != 0) i++;
            if(arr[j] == 0) j++;
        }
    }

    for(int k = 0; k < n; k++) {
        cout<<arr[k]<<" ";
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

    moveZeroes(arr);

    return 0;
}