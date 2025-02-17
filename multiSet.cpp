#include <iostream>
#include <set>
//#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    // Multiset holo just sorted unique thakbe nah
    multiset<int> s;

    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(6);
    s.insert(2);

    cout << s.size() << endl;
    for(auto i : s){
        cout << i << " "; // 1 1 1 2 2 3 4 6 
    }
    cout << endl;


    // How many times 1 are in this code 
    cout << s.count(1) << endl; // 3

/*
    // sob gulo value 1 delete hoye jabe
    s.erase(1);
    for(auto i : s){
        cout << i << " "; // 2 2 3 4 6
    }
    cout << endl;
*/

    // just ekta value delete hobe
    auto val = s.find(1); // 1 er address find korbe
    s.erase(val);
    for(auto i : s){
        cout << i << " "; // 1 1 2 2 3 4 6
    }
    cout << endl;

    return 0;
}