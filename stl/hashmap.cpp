#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    map <string, int> m;
    pair< string, int> p;
    p.first = "sd";
    p.second = 234;
    m.insert(p);
    m["this"] = 1;
    m["this"] = 2;

    cout<< m["sd"] <<endl;
    //cout<<m.count("this")<<endl;
    cout<<m.size()<<endl;





    return 0;


}