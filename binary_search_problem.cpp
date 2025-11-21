#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size-1;
    int count =0;
    while(low <= high){
        int mid = low + (high-low)/2;
        count++;
        if(arr[mid]==target){
            return count;
        }
        else if(arr[mid]<target){
            low = mid + 1;

        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    int array[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int result = binarySearch(array, 10, target);
    if(result != -1){
        cout << "The number of iterations to find target is "<< result <<endl;
    }
    else{
        cout << "The number is not present "<<endl;
    }

}