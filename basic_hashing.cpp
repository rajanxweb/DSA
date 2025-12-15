#include <iostream>
#include <string>
using namespace std;

// hash table for intergers

// int main(){
//     int array_size;
//     cin>>array_size;

//     int arr[array_size];
//     for(int i=0; i<array_size; i++){
//         cin>>arr[i];
//     }

//     int hash_arr[4] = {0};
//     for(int i=0; i<array_size; i++){
//         hash_arr[arr[i]] +=1;
//     }

//     int n;
//     cin>>n;
//     cout<<hash_arr[n]<<endl;


// }


// hash table for string

int main(){
    string s;
    cin>>s;
    int count = s[0];
    for(int i=0; i<s.size(); i++){
        if(s[i] > count){
            count = s[i];
        }
    }

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;

    }

    


}