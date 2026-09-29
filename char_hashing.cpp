#include <iostream>
#include <string>
using namespace std;

int hashing(string s, char c)
{
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    return hash[c];
}
int main(){
    string s;
    getline(cin, s);
    char c;
    cin>>c;
    int count = hashing(s, c);
    cout<<count<<endl;
}