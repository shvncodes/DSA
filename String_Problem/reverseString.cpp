#include<iostream>
using namespace std;

int lengthOfString(char name[]) {
    //is mai size pass karane ki jarurat nhi jb string ka element null hoga to stop kar denge
    int cnt = 0;
    for(int i = 0; name[i] != '\0'; i++) cnt++;

    return cnt;
}

void reverseString(char name[]) {
    int start = 0;
    int end = lengthOfString(name) - 1;
    while(start <= end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main() {
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;  
  
    reverseString(name);

    for(int i = 0; name[i] != '\0'; i++) cout<<name[i]<<" ";

    return 0;
}