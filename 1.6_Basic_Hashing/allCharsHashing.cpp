#include<iostream>
using namespace std;

void frequencyOfCharacters(char arr[], int size, char ch[], int totalChar) {
    int freq[256] = {0};
    
    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }  

    for(int j = 0; j < totalChar; j++) {
        cout<<ch[j]<<" - "<<freq[int(ch[j])]<<" times."<<endl;
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

    int totalChar;
    cout<<"Enter the total Number to check: ";
    cin>>totalChar;

    char ch[totalChar];
    cout<<"Enter the numbers to check: ";
    for(int i = 0; i < totalChar; i++) {
        cin>>ch[i];
    }

    frequencyOfCharacters(arr, size, ch, totalChar);

    return 0;
}