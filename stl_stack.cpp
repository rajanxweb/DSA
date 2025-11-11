#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;
    stack<int>st1, st2;
    st1.push(5);
    st1.swap(st2);
    cout << st2.top() << endl;



}