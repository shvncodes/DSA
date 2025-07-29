#include<iostream>
using namespace std;


int main() {
    string s;
    cout << "Enter your name: ";
    getline(cin, s);  // Takes input with spaces
    cout<<s<<endl;

    string str;
    cout << "Enter your name: ";
    cin>>str;  // Takes input without space
    cout<<str<<endl;

    return 0;
}