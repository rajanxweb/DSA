#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}

int fact(int n){
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}

void printNum(int n){
    if(n<1){
        return;
    }
    cout << n<<" ";
    printNum(n-1);
}

int main(){
    int n;
    cin>>n;
    //printNum(n);
    //cout<<fact(n)<<endl;  
    cout<<sum(n)<<endl;
}