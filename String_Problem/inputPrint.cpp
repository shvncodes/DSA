#include<iostream>
#include<vector>
using namespace std;

void StringWithNull() {
    /* '\0'(null) ke baad ka element print nhi hoga. 
    Eg:- name[4] = '\0';
        agar name = "Shivani" hai to sirf shiv hi print hoga ani nhi.
    */
    char name[50];
    cout<<"Enter your name: ";
    cin>>name;
    name[3] = '\0';     // '\0' -> null

    cout<<"Your name is: ";
    cout<<name;      
}

void String() {
    /*Space ke baad ke naam ko consider nhi karega
    Eg:- agar name = "Shivani Choudhary" hai to array mai bs shivani hi jayega choudhary nhi
    */
    char name[50];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is: ";
    cout<<name;      
}

void strVector() {
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;

    vector<char> name(n);
    cout<<"Enter the elements of the string: ";
    for(int i = 0; i < n; i++) cin>>name[i];

    for(int i = 0; i < n; i++) cout<<name[i]<<" ";  
}

int main() {
    
    // strVector();

    // String();

    StringWithNull();

    return 0;
}