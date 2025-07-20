#include<iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int size, int i) {
    if(i == size) {
        return;
    }

    for(int j = 0; j < i; j++) {
        if(arr[j] > arr[i]) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;   
        }
    }
    i++;

    recursiveInsertionSort(arr, size, i);
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

    cout<<"Before using insertion sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    recursiveInsertionSort(arr, size, 1);

    cout<<"After using insertion sort: ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}