#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){

    int count = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            count = i;
        }
    }
    return count;
    

}

int main(){
    int array[5] ={10, 20, 30, 20, 40};
    int target = 20;

    int result = linearSearch(array, 5, target);

    if(result != -1){
        cout << "The index of last occurrence of target is : "<< result<<endl;
    }
    else{
        cout << "The Target not found "<< endl;
    }

}