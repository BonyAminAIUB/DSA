#include <iostream>
#include <stack>
//#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);

    cout << s.size() << endl; // 4
    cout << s.top() << endl; // 3

    s.pop();
    cout << s.top() << endl; // 4


    stack<int> s1;
    s1.push(2);
    s1.push(1);
    s1.push(4);
    s1.push(3);

    while (!s1.empty())
    {
        cout << s1.top() << " "; // 3 4 1 2
        s1.pop();
    }
    cout << endl;
    

    return 0;
}