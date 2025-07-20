#include<iostream>
using namespace std;

void reverseArray(int arr[], int size, int i) {
    if(i == size/2) {
        return;
    }

    int temp = arr[i];
    arr[i] = arr[size-(i+1)];
    arr[size-(i+1)] = temp;
    i++;

    reverseArray(arr, size, i);
}

int main() {
    int size;
    cout<<"Enter the size of arry: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    reverseArray(arr, size, 0);

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}