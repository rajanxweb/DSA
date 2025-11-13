#include <bits/stdc++.h>
using namespace std;

void palindromeNum(int n){
    int rem = 0;
    int rev = 0;
    int toCheck = n;
    // if(n < 0){
    //     n = -n;
    // }
    int digit = n % 10;

    while(n > 0){
        rem = n % 10;
        n /= 10;
        if(rev > INT_MAX / 10 || (rev == INT_MAX && digit > 7)){
            cout << 0<<endl;
            return;
        }
        if(rev < INT_MIN / 10 || (rev == INT_MIN && digit < -8)){
            cout << 0 << endl;
            return;
        }
        rev = rev * 10 + rem;
    }
    if(rev == toCheck){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}
void armstrongNum(int n){
    int rem=0;
    int cubeSum=0;
    int nCheck = n;
    while(n>0){
        rem = n % 10;
        cubeSum += rem*rem*rem;
        n /= 10;
    }
    if(cubeSum == nCheck){
        cout << nCheck << " is an armstrong num. "<< endl;
    }
    else{
        cout << nCheck << " is not a armstrong num. "<< endl;
    }
}
void countDivisior(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n %i == 0){
            cout << i<< " ";
            count++;
        }
    }
    cout << endl;
    cout <<"the total number of divisiors are: "<< count <<endl;
}


int main(){
    int N;
    cin>>N;
    countDivisior(N);

}