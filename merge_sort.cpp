// divide and conquer algorithm
#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid+1-l;
    int n2 = r-mid;

    // temp arrays
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];  // arr's starting pointer is l
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    int i=0; // for array a
    int j=0; // for array b
    int k=l; // for array arr

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++; k++;
        }
        else{
            arr[k] = b[j];
            j++; k++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}


int main(void){

    int arr[] = {6,3,9,5,2,8,7,1};
    mergeSort(arr, 0, 7);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


// Levels:
// n/2^k = 1
// n = 2^k
// k = Log n --> <base2>

// time complexity:
// we take an array we sort the first half(n/2) and the second half(n/2) then merge(n)
// T(n) = T(n/2) + T(n/2) + n
// T(n) = 2T(n/2) + n           x1
// T(n/2) = 2T(n/4) + n/2       x2
// T(n/4) = 2T(n/8) + n/4       x4
// .                            .
// .                            .
// .                            .
// T(1) = 1                     x2^(Log (base 2) n) = n

// we multiply so that LHS and RHS get cancelled eventually leaving us:
// T(n) = n + n + n + n + ..... Log (base2) n terms
// in every level n is given and total levels is Log(base 2) n 
// T(n) = n [Log(base2) n]
