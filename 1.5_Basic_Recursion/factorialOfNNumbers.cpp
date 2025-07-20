#include<iostream>
using namespace std;

void factorialOfNumbers(int N, int n) {
    if(n > N) {
        return ;
    }
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    n++;

    factorialOfNumbers(N, n);
}

int main() {
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    factorialOfNumbers(N, 1);

    return 0;
}