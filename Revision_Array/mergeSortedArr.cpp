#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void solution(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();

    int x = 0, y = 0;
    for(int i = 0; i < m; i++) if(nums1[i] != 0) x++;
    for(int j = 0; j < n; j++) if(nums2[j] != 0) y++;   

    vector<int> temp(x+y, 0);
    int i = 0, j = 0, k = 0;
    while(i < m && j < n) {
        while(i < m && nums1[i] == 0) i++;
        while(j < n && nums2[j] == 0) j++;

        if(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                temp[k] = nums1[i];
                i++;
                k++;
            } else {
                temp[k] = nums2[j];
                j++;
                k++;
            }
        }
    }

    while(i < m) {
        if(nums1[i]!= 0) {
            temp[k] = nums1[i];
            i++;
            k++;
        }
    }

    while(j < n) {
        if(nums2[j]!= 0) {
            temp[k] = nums2[j];
            j++;
            k++;
        }
    }

    for(int i = 0; i < temp.size(); i++) cout<<temp[i]<<" ";
}

int main() {
    int m;
    cout<<"Enter the size of nums1: ";
    cin>>m;

    vector<int> nums1(m);
    cout<<"Enter the elements of nums1: ";
    for(int i = 0; i < m; i++) cin>>nums1[i];

    int n; 
    cout<<"Enter the size of nums2: ";
    cin>>n;

    vector<int> nums2(n);
    cout<<"Enter the elements of nums2: ";
    for(int i = 0; i < n; i++) cin>>nums2[i];


    solution(nums1, nums2);     // SC: O(m+n)   TC: (m+n)

    return 0;
}