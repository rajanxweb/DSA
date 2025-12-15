
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    d.pop_front();
    for(int val : d){
        cout<<val<<" ";
    }
    cout<<endl;
}