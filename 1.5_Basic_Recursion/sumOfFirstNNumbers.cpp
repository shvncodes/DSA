#include<iostream>
using namespace std;

int sumOfNumbers(int N, int sum) {
    if(N == 0) {
        return sum;
    }
    sum = sum + N;
    N--;

    sumOfNumbers(N, sum);
}

int main() {
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    cout<<"Sum of first "<<N<<" numbers: "<<sumOfNumbers(N, 0);

    return 0;
}