#include <iostream>
#include <queue>
using namespace std;

int main(){

    //priority

    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }

    // reverse priority

    priority_queue<int , vector<int>, greater<int>> p;
    p.push(1);
    p.push(5);
    p.push(0);

    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }

}