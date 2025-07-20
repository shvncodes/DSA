#include<iostream>
using namespace std;

bool isPalindrome(int num, int palNum, int orginalNum) {
    if(num == 0) {
        return palNum == orginalNum;
    }
    
    int rem = num%10;
    palNum = (palNum*10) + rem;
    num = num/10;

    return isPalindrome(num, palNum, orginalNum);
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(isPalindrome(num, 0, num)) {
        cout<<"Palindrome";
    }  else {
        cout<<"NOT Palindrome";
    }

    return 0;
}