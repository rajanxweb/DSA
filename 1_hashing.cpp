#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //assume maximum numer in the array is 15
    int hash[16] = {0};
    for(int i= 0; i<n; i++){
        hash[arr[i]] +=1;
    }

    //fetching takes O(1) from hash table

    cout<<hash[15]<<endl;


}