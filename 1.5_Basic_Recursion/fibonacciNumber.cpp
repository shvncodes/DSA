#include<iostream>
using namespace std;

void fiboNum(int n, int count, int firstNum, int secondNum) {
    if(count == n) {
        return ;
    }
    
    int nextNum = firstNum + secondNum;
    cout<<firstNum<<" ";
    firstNum = secondNum;
    secondNum = nextNum;
    count++;

    fiboNum(n, count, firstNum, secondNum);
}

int main() {
    int n;
    cin>>n;

    fiboNum(n, 0, 0, 1);
    
    return 0;
}