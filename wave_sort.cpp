#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(void){
    int arr[] = {1,3,4,7,5,6,2};
    for(int i=1; i<7; i++){
        if(arr[i]>arr[i-1]){
            swap(arr, i, i-1);
        }
        if(arr[i]>arr[i+1] && i<=7-2){
            swap(arr, i, i+1);
        }
        i+=2;
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}