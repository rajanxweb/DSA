#include <bits/stdc++.h>
using namespace std;

void primeCheck(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << "not a prime number"<< endl;
            return;
        }
    }
    cout << "prime number"<< endl;
}

void optimal_primeCheck(int n){
    int count = 0;
    for(int i=1; i*i <=n; i++){
        if(n%i == 0){
            count++;
            if(n%i != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout << "prime number";
    }
    else{
        cout << "not a prime number";
    }
}

void gcd(int a, int b){
    if(a>b){
        int gd = 0;
        for(int i=1; i<=a; i++){
            if((a%i== 0) && (b%i ==0)){
                gd = i;
            }
        }
        cout << gd;
    }
    else{
        int gd = 0;
        for(int i=1; i<=b; i++){
            if((b%i==0) && (a%i==0)){
                gd = i;
            }
        }
        cout << gd;

    }
}

int main(){
    int n, m;
    cin>> n>>m;
    gcd(n, m);
    
}