#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        bool swap = false;
        for(int j=0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(swap == false ){
            break;
        }
    }
    
}

int main(){
    int arr[6] = {3,5,54,2,6,7};
    bubble_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" "<<endl;
    }

}