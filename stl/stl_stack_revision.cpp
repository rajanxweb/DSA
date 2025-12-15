#include<iostream>
#include<stack>
using namespace std;

int main(){

    // stack

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    // while(!s.empty()){
    //     s.pop();
    //     cout<<s.top()<<endl;
    // }

    stack<int> s2;
    s2.swap(s);
    cout<<s2.size()<<endl;



}