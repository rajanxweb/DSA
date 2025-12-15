#include <bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>>poq;
    poq.push(10);
    poq.push(11);
    poq.push(12);
    cout << poq.top() << endl;




}