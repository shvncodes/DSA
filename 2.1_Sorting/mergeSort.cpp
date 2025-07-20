#include<iostream>
#include<vector>
using namespace std;

// Merge Sort:- Divide & Merge
// This algorithm is divided into two parts one is divide and another is merge.
// Worst Time Complexity:- O(N*log(N)) [N -> length of the array Or Size of the array]
// Space complexity:- O(N) {In merge function to make an temporary array}

                                    // Merge the array-
void merge(vector<int>& arr, int low, int mid, int high) {
    /*We get two sorted array to merge -
        1. [low,...., mid]
        2. [mid+1,......., high]
    */
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;            
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
            // Jo bhi elements reh gye hai left/right array mai unko ussi sequence mai dalana hai
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }
}

                                        // Divide the array-
void mergeSort(vector<int> &arr, int low, int high) {
    /* Iska mtlb us array mai bs ek hi element bacha hai aur ek element wale array 
            ko hum further divide nhi kar sakte.*/
    if(low == high) {
        return;
    }
    int mid = (low + high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    // Body-
    merge(arr, low, mid, high);
}

                                    // Call the function-
void mergeSorting(vector<int> &arr, int size) {
    mergeSort(arr, 0, size-1);
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>> size;

    vector<int> arr(size);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    mergeSorting(arr, size);

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}