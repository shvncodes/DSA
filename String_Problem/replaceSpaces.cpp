#include<iostream>
#include<string>
using namespace std;

void replaceSpaces(string& s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == ' ') s[i] += '#';
    }

    for(int i = 0; i < n; i++) cout<<s[i];
}

int main() {
    string s;
    cout << "Enter your name: ";
    getline(cin, s);  
    cout<<s<<endl;

    replaceSpaces(s);

    return 0;
}