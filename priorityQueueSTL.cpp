#include <iostream>
#include <queue>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    priority_queue<int> q;
    q.push(1);
    q.push(6);
    q.push(3);
    q.push(5);
    q.push(4);
    q.push(1);

    // top means sob cheye boro value ta for priority queue
    cout << q.top() << endl; // 6
    cout << q.size() << endl; // 6

    q.pop();
    cout << q.top() << endl; // 5

    // print korbe boro theke choto
    while(!q.empty()){
        cout << q.top() << " "; // 5 4 3 1 1
        q.pop();
    }
    cout << endl << endl << endl;


    // comparetor use korar jonno choto theke boro print korbe
    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(1);
    q1.push(6);
    q1.push(3);
    q1.push(5);
    q1.push(4);
    q1.push(1);

    while(!q1.empty())
    {
        cout << q1.top() << " "; // 1 1 3 4 5 6
        q1.pop(); 
    }
    cout << endl;


    priority_queue<pair<int,int>> q2;
    q2.push({1,2});
    q2.push({2,3});
    q2.push({3,5});
    q2.push({4,4});
    q2.push({3,4});
    q2.push({3,1});
    q2.push({4,2});
    q2.push({2,1});

    while(!q2.empty()){
        cout << q2.top().first << " " << q2.top().second  << endl;
        q2.pop();
    }
    cout << endl;

    return 0;
}