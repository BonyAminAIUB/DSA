#include <iostream>
#include <set>
//include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    //ser er vitore code sobsomoy unique & sorted thakbe
    set<int> s = {2,3,1,4,2,3,1,2};
    cout << s.size() << endl; // 4
    for(auto i : s){
        cout << i << " "; // 1 2 3 4
    }
    cout << endl;


    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " "; // 1 2 3 4
    }
    cout << endl;


    s.clear();
    cout << s.empty() << endl; // 1

    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    cout << s.size() << endl; // 3
    for(auto i : s){
        cout << i << " "; // 1 2 3
    }
    cout << endl;


    // count function jeta count kore oi element koyta ache
    cout << s.count(2) << endl; // 1  log2(n)
    cout << s.count(4) << endl; // 0

    // set er 1st element dekhabe after sorted automatically
    cout << *s.begin() << endl; // 1

    // set er 1st element dekhabe after sorted automatically
    cout << *s.end() << endl; // 3
    cout << *(--s.end()) << endl; // 3
    cout << *s.rbegin() << endl << endl; // 3

    // delete a value
    s.erase(2); // value 2 delete
    //s.erase(s.begin()); // 1st element delete
    //s.erase(--s.end()); // last element delete
    cout << s.size() << endl;
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;


    // set of string
    set<string> s1;
    s1.insert("Bony");
    s1.insert("Amin");
    s1.insert("MdBony");
    s1.insert("MdAmin");
    s1.insert("Bony");
    s1.insert("Amin");
    s1.insert("MdBony");
    s1.insert("BonyAmin");

    cout << s1.size() << endl; // 5
    for(auto i : s1){
        cout << i << " "; // Amin Bony BonyAmin MdAmin MdBony
    }
    cout << endl;
    

    // set of pair incresing order
    set<pair<int, int>> s2;

    s2.insert({2,3});
    s2.insert({4,1});
    s2.insert({4,1});
    s2.insert({2,1});
    s2.insert({4,3});
    s2.insert({5,1});
    s2.insert({5,1});
    s2.insert({5,4});

    cout << s2.size() << endl; // 6
    for(auto i : s2){
        cout << i.first << " " << i.second << endl;
    } 


    // set decresing order a sort korbe
    set<int, greater<int>> s3;
    s3.insert(2);
    s3.insert(2);
    s3.insert(3);
    s3.insert(4);

    for(auto i : s3){
        cout << i << " "; // 4 3 2 
    }
    cout << endl;


     // set of pair decresing order
     set<pair<int, int>, greater<pair<int,int>>> s4;

     s4.insert({2,3});
     s4.insert({4,1});
     s4.insert({4,1});
     s4.insert({2,1});
     s4.insert({4,3});
     s4.insert({5,1});
     s4.insert({5,1});
     s4.insert({5,4});
 
     for(auto i : s4){
         cout << i.first << " " << i.second << endl;
     } 

     return 0;
}