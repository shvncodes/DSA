#include<iostream>
using namespace std;

void frequencyOfElements(int arr[], int size,int nums[], int totalNum) {
    int freq[100] = {0};
    
    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }

    for(int j = 0; j < totalNum; j++) {
        cout<<nums[j]<<" - "<<freq[nums[j]]<<" times."<<endl;
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int totalNum;
    cout<<"Enter the total Number to check: ";
    cin>>totalNum;

    int nums[totalNum];
    cout<<"Enter the numbers to check: ";
    for(int i = 0; i < totalNum; i++) {
        cin>>nums[i];
    }

    frequencyOfElements(arr, size, nums, totalNum);

    return 0;
}