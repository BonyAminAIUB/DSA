#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main ()
{
    vector<int> v;
    optimize();

    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );

    cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 2 3

    v[1] = 3;
    cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 3 3

    cout << v.size() << endl; /// 3
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; /// 1 3 3
    cout << endl;

    vector <int> v1 = { 2, 3, 4 };

    cout << v1.size() << endl; /// 3
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4
    cout << endl;

    v.clear();
    cout << v.size() << endl; /// 0
    cout << v.empty() << endl; /// 1
    cout << v1.empty() << endl; /// 0

    v1.resize(5);
    cout << v1.size() << endl; /// 5
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4 0 0
    cout << endl;

    vector<int> a(5);

    cout << a.size() << endl; /// 5
    for ( int i = 0; i < a.size(); i++ ) cout << a[i] << " "; /// 0 0 0 0 0
    cout << endl;

    a = v1;

    for ( auto u : a ) cout << u << " "; /// 2 3 4 0 0
    cout << endl;

    vector<int>::iterator it;
    for ( it = a.begin(); it != a.end(); it++ ) cout << *it << " "; /// 2 3 4 0 0
    cout << endl;

    a = { 3, 4, 5, 1, 2 };

    sort ( a.begin(), a.end() ); ///O(n*log2(n))
    

    for ( auto u : a ) cout << u << " "; /// 1 2 3 4 5
    cout << endl;

    sort ( a.rbegin(), a.rend() );

    for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
    cout << endl;


    a = { 3, 4, 5, 1, 2 };
    sort ( a.begin(), a.end(), greater<int>() );

    for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
    cout << endl;

    a = { 3, 4, 5, 1, 2 };

    reverse( a.begin(), a.end() );

    for ( auto u : a ) cout << u << " "; /// 2 1 5 4 3
    cout << endl;

    cout << a.back() << endl; /// 3
    a.pop_back(); /// O(1) complexity.
    cout << a.back() << endl; /// 4


    a = { 3, 4, 5, 1, 2 };
    cout << *a.begin() << endl; /// 3

    a.erase( a.begin() ); /// O(n) complexity.
    for ( auto u : a ) cout << u << " "; /// 4 5 1 2
    cout << endl;

    a.erase( a.begin()+2 );
    for ( auto u : a ) cout << u << " "; /// 4 5 2
    cout << endl;

    a = { 1, 1, 2, 2, 2, 3, 3 };
    unique( a.begin(), a.end() );

    for ( auto u : a ) cout << u << " "; /// 1 2 3 2 2 3 3
    cout << endl;


    a = { 1, 1, 2, 2, 2, 3, 3 };
    int n = unique( a.begin(), a.end() ) - a.begin();

    cout << n << endl; /// 3
    for ( int i = 0; i < n; i++ ) cout << a[i] << " "; /// 1 2 3
    cout << endl;

    a = { 2, 3, 1, 5 };
    cout << max_element( a.begin(), a.end() ) - a.begin() << endl; /// 3
    cout << *max_element( a.begin(), a.end() ) << endl; /// 5

    vector<int> v = {2,3,5,5,7,7,1};

    sort(v.begin(),v.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    unique(v.begin(), v.end());  
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    int size = unique(v.begin(), v.end()) - v.begin();   
    for(auto i : v){
        cout << i << " ";
    }
    cout << size << endl;

    vector<int> :: iterator it = max_element(v.begin(), v.end());
    cout << *it << endl;

    vector<int> :: iterator it1 = max_element(v.begin()+1, v.begin()+4);
    cout << *it1 << endl;

    int index = max_element(v.begin()+1, v.begin()+4) - v.begin();
    cout << index << endl;

    int index1 = min_element(v.begin(), v.end()) - v.begin();
    cout << index << endl;

    vector< vector<int> > v1;
    v1.push_back();


    return 0;
}