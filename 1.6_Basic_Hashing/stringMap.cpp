#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string, int> m;

    //m[key] = value;
    m["Shivani"] = 21;
    m["Nisha"] = 32;
    m["Simran"] = 24;
    m["Trisha"] = 40;
    m["Ankita"] = 29;

    //Key ki value ko update kar dega: 
    m["Trisha"] = 49;

    //New key & value ko insert karega:
    m.insert({"Anshika", 41});
            //OR
    m.emplace("Neha", 20);

    // kitne keys hai humare map mai is naam ki:
    cout<<"count: "<<m.count("Simran")<<endl;

    //erase that key value:
    m.erase("Ankita");

    //find:
    if(m.find("Shivani") != m.find("Simran")) {
        cout<<"different Values."<<endl;
    }

    if(m.find("Anjali") == m.end()) {
        cout<<"Does not exist."<<endl;
    } else {
        cout<<"Exist."<< m["Anjali"]<<endl;
    }

    //Print key and values:
    for(auto val : m) {
        cout<<val.first<<" "<<val.second<<endl;
    }
 
    return 0;
}