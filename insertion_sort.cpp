// Insert an element from unsorted array to it's correct position in sorted array
// Start from 2nd element

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=1; i<n; i++){  // start from the 2nd element!
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;            
    }                                  
    for(int i=0; i<n; i++)              
        cout<<arr[i]<<" ";     
    cout<<endl;            
}