#include<iostream>
using namespace std;

void recursiveBubbleSort(int arr[], int size) {
    if (size == 1) {
        return;
    }
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    size--;

    recursiveBubbleSort(arr, size);
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

    cout<<"Before using bubble sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    recursiveBubbleSort(arr, size);

    cout<<"After using bubble sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}