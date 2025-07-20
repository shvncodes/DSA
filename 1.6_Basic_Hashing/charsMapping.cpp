#include<iostream>
#include<map>
using namespace std;

void frequencyOfChars(char arr[], int size, char ch[], int totalChars) {
    map<char, int> mpp;

    for(int i = 0; i < size; i++) {
        mpp[arr[i] - 'a']++;
    }

    for(int j = 0; j < totalChars; j++) {
        cout<<ch[j]<<" - "<<mpp[ch[j] - 'a']<<" times."<<endl;
    }

}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    char arr[size];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int totalChars;
    cout<<"Enter the total Number to check: ";
    cin>>totalChars;

    char ch[totalChars];
    cout<<"Enter the numbers to check: ";
    for(int i = 0; i < totalChars; i++) {
        cin>>ch[i];
    }

    frequencyOfChars(arr, size, ch, totalChars);

    return 0;
}