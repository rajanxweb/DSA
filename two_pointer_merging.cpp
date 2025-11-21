#include <iostream>
using namespace std;
void mergeArray(int arr1[],int n1,int arr2[],int n2, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main(){
    int arr1[2] = {10, 15};
    int arr2[3] = {12, 14, 20};
    int arr3[2+3];
    int n1 = 2;
    int n2 = 3;

    mergeArray(arr1, n1, arr2, n2, arr3);
    cout << "Printing the merged array: "<<endl;
    for(int i=0; i<n1+n2; i++){
        cout << arr3[i]<<" ";
    }


}