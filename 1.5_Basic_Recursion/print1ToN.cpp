#include<iostream>
using namespace std;

void printNumbers(int N, int n) {
    if(n > N) {
        return;
    }
    cout<<n<<" ";
    n++;

    printNumbers(N, n);
}

int main() {
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    cout<<"Numbers from 1 to "<<N<<": ";
    printNumbers(N, 1);

    return 0;
}