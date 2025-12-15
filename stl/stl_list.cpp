#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(2);
    if(!ls.empty()){
        cout << *ls.begin() << endl;
    }
    ls.emplace_back(3);
    

}