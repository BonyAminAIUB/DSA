#include <iostream>
#include <queue>
//#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){

    optimize();

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.size() << endl; // 5
    cout << q.front() << endl; // 1


    
    q.pop();
    cout << q.size() << endl; // 4
    cout << q.front() << endl; // 2  
   
    while(!q.empty()){
        cout << q.front() << " "; // 2 3 4 5
        q.pop();
    }
    cout << endl << endl << endl;



    // Dequeue
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout << dq.size() << endl; // 5
    cout << dq.front() << endl; // 3
    cout << dq.back() << endl; // 5

    dq.pop_front();
    cout << dq.front() << endl; // 2
    cout << dq.back() << endl; // 5

    dq.pop_back();
    cout << dq.front() << endl; // 2
    cout << dq.back() << endl; // 4
   
    cout << dq.empty() << endl; // 0

    return 0;
}