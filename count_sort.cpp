// better time complexity than merge sort or quick sort
// 1. find the count of every distinct element in the array
// 2. calculate the position of each element in the sorted array

#include <iostream>
using namespace std;

void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0; i<n; i++){
        k=max(k, arr[i]);
    }
    int countArr[10] = {0};
    for(int i=0; i<n; i++){
        countArr[arr[i]]++;  // to put the count of each element in the countArr
    }

    for(int i=1; i<=k; i++){
        countArr[i]+=countArr[i-1];
    }
    
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--countArr[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

int main(void){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr, 9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}