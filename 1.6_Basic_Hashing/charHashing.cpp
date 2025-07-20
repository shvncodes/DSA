#include<iostream>
using namespace std;

void frequencyOfCharacters(char arr[], int size, char character[], int totalChar) {
    int freq[26] = {0};
    
    for(int i = 0; i < size; i++) {
        int element = arr[i] - 'a';
        freq[element]++;
    }  

    for(int j = 0; j < totalChar; j++) {
        cout<<character[j]<<" - "<<freq[int(character[j]) - 'a']<<" times."<<endl;
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

    char character[totalChar];
    cout<<"Enter the numbers to check: ";
    for(int i = 0; i < totalChar; i++) {
        cin>>character[i];
    }

    frequencyOfCharacters(arr, size, character, totalChar);

    return 0;
}