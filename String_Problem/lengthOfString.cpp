#include<iostream>
using namespace std;

int lengthOfString(char name[]) {
    //is mai size pass karane ki jarurat nhi jb string ka element null hoga to stop kar denge
    int cnt = 0;
    for(int i = 0; name[i] != '\0'; i++) cnt++;

    return cnt;
}

int main() {
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;  
  
    cout<<"Length of string: "<<lengthOfString(name);

    return 0;
}