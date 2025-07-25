#include<iostream>
using namespace std;

int main() {
    string name = "Shivani";
    name.push_back('\0');
    name.push_back('C');
    name.push_back('h');
    name.push_back('o');
    name.push_back('u');
    name.push_back('d');
    name.push_back('h');
    name.push_back('a');
    name.push_back('r');
    name.push_back('y');

    cout<<name<<endl;
    cout<<name.length()<<endl;
    cout<<name.empty()<<endl;
    name.pop_back();
    cout<<name<<endl;
    name.clear();
    cout<<name<<endl;

    return 0;
}