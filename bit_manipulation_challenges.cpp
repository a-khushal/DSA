#include <iostream>
using namespace std;


int numberofones(int n){
    int count = 0;
    while(n){    // or while(n!=0)
        n = n & n-1;
        count++;
    }
    return count;
}

void subsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){   // (1<<n) is 2^n
        for(int j=0; j<n; j++){
            if(i & (1<<j)){  // get bit logic we check if the jth bit of number i is 1 if yes print arr[j] 
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

bool ispowerof2(int n){
    return n && !(n & n-1);
}

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;

    // n ^ n = 0 
    // 0 ^ n = n
}


int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int towUnique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n ;i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0; int pos = 0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    
    int newxor = 0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

int main(void){
    // cout<<ispowerof2(7)<<endl;
    // cout<<numberofones(19)<<endl;
    // int arr[4] = {1,2,3,4};
    // subsets(arr, 4);
    // int arr[7] = {2, 4, 6, 3, 4, 6, 2};
    // cout<<unique(arr, 7)<<endl;
    int arr[] = {1,2,3,4,5,3,2,1};
    towUnique(arr, 8);
    return 0;

}