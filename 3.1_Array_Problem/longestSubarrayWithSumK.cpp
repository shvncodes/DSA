#include<iostream>
#include<vector>
#include<map>
using namespace std;

            //FOR BOTH POSITIVE & NEGATIVE ELEMENTS:
int longestSubarrayWithGivenSum1(vector<int> arr, int k) { 
    // TC: O(N^2) &  SC: O(1);
    int len = 0;
    for(int j = 0; j < arr.size(); j++) {
        int sum = 0;
        for(int i = j; i < arr.size(); i++) {
            sum += arr[i];
            if(sum == k) {
                len = max(len, i-j+1);
            }
        }
    }
    return len;
}

            //FOR BOTH POSITIVE & NEGATIVE ELEMENTS:
int longestSubarrayWithGivenSum2(vector<int> arr, int k) { 
    // TC: O(N * logN) &  SC: O(N);
    map<long int, int> preSumMap;
    long int sum = 0;
    int maxLen = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(len, maxLen);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

            //FOR ONLY POSITIVE & ZERO ELEMENTS:
int longestSubarrayWithGivenSum3(vector<int> arr, int k) { 
    // TC: O(2*N) &  SC: O(1);
    int n = arr.size();
    int i = 0, j = 0;
    int maxLen = 0;
    int sum = arr[0];
    while(j < n) {
        while(i <= j && sum > k) {
            sum -= arr[i];
            i++;
        }
        if(sum == k) {
            maxLen = max(maxLen, j-i+1);
        }
        j++;
        if(j < n) {
            sum += arr[j];
        }
    }
    return maxLen;
}

int main() {
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;

    vector<int> arr(N);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < N; i++) {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of sum: ";
    cin>>k;

    // cout<<longestSubarrayWithGivenSum1(arr, k);

    // cout<<longestSubarrayWithGivenSum2(arr, k);

    cout<<longestSubarrayWithGivenSum3(arr, k);

    return 0;
}
