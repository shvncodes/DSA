#include<iostream>
using namespace std;

// Selection Sort:- Push the minimum element at first and swap with the minimum element index.
// Worst/Average/Best Time Complexity -> O(N^2)

void selectionSort(int arr[], int size) {
   for(int i = 0; i < size-1; i++) {
        int minIndx = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[minIndx]) {
                minIndx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndx];
        arr[minIndx] = temp;
    }

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>> size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    selectionSort(arr, size);

    return 0;
}