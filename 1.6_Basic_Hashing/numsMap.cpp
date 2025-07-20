#include<iostream>
#include<map>
using namespace std;

void frequencyOfElement(int arr[], int size, int nums[], int totalNum) {
    /* map<key, values>
         - key: a key refers to the element, for which we want to store information.(always unique)
         - values: Value refers to the information stored corresponding to a key.

    -> Map: Stores all the elements in sorted order of keys.
    */ 
    map<int, int> mpp;    

    for(int i = 0; i < size; i++) {
        mpp[arr[i]]++;
    }

            // Its store elements in sorted order:- 
    for(auto it: mpp) {
        cout<<it.first<<" --> "<<it.second<<endl;
    }

    for(int j = 0; j < totalNum; j++) {
        cout<<nums[j]<<" - "<<mpp[nums[j]]<<" times."<<endl;
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

    frequencyOfElement(arr, size, nums, totalNum);

    return 0;
}