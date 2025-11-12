#include <bits/stdc++.h>
using namespace std;
 
// reverse a number
void reverseNum(int N){
    while(N % 10 == 0){
        N /=10;
    }
    int rem = 0;
    int rev = 0;
    while(N > 0)
    {
        rem = N % 10;
        rev = rev * 10 + rem;
        N /= 10;        
    }
    cout << rev;
    
} 


//Count all Digits of a Number
void countDigit(int n) {
        int count = 0;
        while(n > 0){
            n /= 10;
            count +=1;
        }
        cout << count;
    
    }



int main(){
    int N;
    cin>>N;
    reverseNum(N);

}


