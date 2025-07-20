#include<iostream>
using namespace std;

// Insertion Sort:- Take an element and place it in its correct position.
// Worst/Average Time Complexity -> O(N^2)
// Best Time Complexity -> O(N)  (Sirf outside wala loop hi chalega)

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                // cout<<"Runs"<<endl; // For checking the time complexity
            }
        }
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

    insertionSort(arr,size);
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}