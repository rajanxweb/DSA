#include<iostream>
using namespace std;

int stairCase(int x){
    int count = 0;
    if(x==0){
        return count;
    }
    stairCase(x-1);
    count++;

}

int main(){

}