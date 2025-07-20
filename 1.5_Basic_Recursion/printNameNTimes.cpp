#include<iostream>
using namespace std;

// int count = 0;
// void printShivani(int n) {
//     if(count == n) {
//         return;
//     }
//     cout<<"Shivani"<<endl;
//     count++;

//     printShivani(n);
// }

void printShivani(int n) {
    // base case
    if(n == 0) {
        return;
    }

    // body
    cout<<"Shivani"<<endl;
    n--;

    // recursive case
    printShivani(n);
}

void printNisha(int n, int count) {
    if(n == count) {
        return;
    }

    cout<<"Nisha"<<endl;
    count++;

    printNisha(n, count);
}


int main() {
    int n;
    cin>>n;

    printShivani(n);
    printNisha(n, 0);

    return 0;
}