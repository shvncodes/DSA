#include<iostream>
using namespace std;

void printReverseNumber(int N) {
    if(N == 0) {
        return;
    }
    cout<<N<<" ";
    N--;

    printReverseNumber(N);
}

int main() {
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    cout<<"Numbers from "<<N<<" to 1: ";
    printReverseNumber(N);
    
    return 0;
}