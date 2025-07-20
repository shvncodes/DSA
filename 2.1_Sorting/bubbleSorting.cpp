#include<iostream>
#include<climits>
using namespace std;

// Bubble Sort:- Push the maxinum element at last by adjacent swap.
// Worst/Average Time Complexity -> O(N^2)
// Best Time Complexity -> O(N)  (Sirf outside wala loop hi chalega)

void bubbleSort(int arr[], int size) {
    while(size > 1) {
        for(int i = 0; i < size; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                // cout<<"Runs"<<endl; // For checking the time complexity
            }
        }
        size--;
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

    bubbleSort(arr, size);
    
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}