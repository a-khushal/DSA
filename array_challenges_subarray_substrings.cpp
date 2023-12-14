// // Max till i
// #include<iostream>
// using namespace std;
// int main(void){
//     int n;
//     cout<<"Enter the size fo the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int mx = -2999999;
//     for(int i=0; i<n; i++){
//         mx = max(mx, arr[i]);
//         cout<<mx<<" ";
//     }
// }


// Subarray and Subsequences

// subarry is "continuous" part of the array.
// number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2.

// subsequence is a sequence that can be derived from an array by selecting zero or more elements, without changing the order of the remaining elements. It's not continuous but the order remains the same as the original array
// number of subsequences of an array of n elements is = 2^n.

// Every subarray is a subsequence but every subsequence is not a subarray.



// // sum of all subarrays
// #include<iostream>
// using namespace std;
// int main(void){
//     int n, sum=0;
//     cout<<"Enter the size fo the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++){
//         sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             cout<<sum<<endl;
//         }
//     }  
// }



// // Longest Arithematic Subarray: Google kickstart
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j=2;
//     int curr = 2;

//     while(j<n){
//         if(pd == arr[j]-arr[j-1]){
//             curr++;
//         }
//         else{
//             pd = arr[j]-arr[j-1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     // cout<<curr<<endl;
//     cout<<ans<<endl;
//     return 0;
// }





// // Record breaker: google kickstart
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n+1];
//     arr[n] = -1;

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;   // we initialize with -1 cuz here number of visitors/days can't be -ve so -1 as initial condition

//     for(int i=0; i<n; i++){
//         if(arr[i]>mx && arr[i]>arr[i+1]){
//             ans++;
//         }
//         mx = max(mx, arr[i]);
//     }
//     cout<<ans<<endl;
//     return 0;
// }




// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n]; int count=0;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[j] == arr[i]){
//                 count++;
//             }
//         }
//         if(count>=2){
//             cout<<i+1<<endl;
//             return 0;
//         }
//         count = 0;
//     }
//     cout<<"no repeated element"<<endl;
//     return 0;
// }



// // with the least time complexity
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     const int N = 1e6+2;
//     int idx[N];
//     for(int i=0; i<N; i++){
//         idx[i] = -1;
//     }

//     int minidx = INT_MAX;

//     for(int i=0; i<n; i++){
//         if(idx[arr[i]] != -1){
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]] = i;
//         }
//     }

//     if(minidx == INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx+1<<endl;
//     }

//     return 0;
// }



// // ***
// // subarray with given sum
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n, S;
//     cin>>n>>S;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int i=0, j=0, st=-1, en=-1, sum=0;

//     while(j<n && sum+arr[j] <= S){
//         sum += arr[j];
//         j++;
//     }

//     if(sum == S){
//         cout<<i+1<<" "<<j+1<<endl;
//         return 0;
//     }
//     while(j<n){
//         sum += arr[j];
//         while(sum > S){
//             sum -= arr[i];
//             i++;
//         }
//         if(sum == S){
//             st = i+1;
//             en = j+1;
//             break;
//         }
//         j++;
//     }
//     cout<<st<<" "<<en<<endl;

//     return 0;
// }



// // smallest positive missing number
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     const int N = 1e6+2;
//     bool check[N];
//     for(int i=0; i<N; i++){
//         check[i] = false;
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i] >= 0){
//             check[arr[i]] = true;
//         }
//     }

//     int ans = -1;
//     for(int i=0; i<N; i++){
//         if(check[i] == false){
//             ans = i;
//             break;
//         }
//     }

//     cout<<ans<<endl;
    
//     return 0;
// }



// // all the subarrays
// #include "bits/stdc++.h"
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int m=0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int k=i; k<=j; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     return 0;
// }


// // maximum subarray sum: brute force 
// #include "bits/stdc++.h"
// using namespace std;
// int main(void){
//     int n, sum=0;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int mx = INT_MIN;
//     for(int i=0; i<n; i++){
//         sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             // if(sum>mx){
//             //     mx = sum;
//             // }
//             mx = max(mx, sum);
//         }
//     }  
//     cout<<mx<<endl;
// }


// // cummulative sum approach with better time complexity
// #include "bits/stdc++.h"
// using namespace std;
// int main(void){
//     int n, sum=0;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int currSum[n+1];
//     currSum[0] = 0;

//     for(int i=1; i<=n; i++){
//         currSum[i] = currSum[i-1] + arr[i-1];
//     }
//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum = 0;
//         for(int j=0; j<i; j++){
//             sum = currSum[i] - currSum[j];
//             maxSum = max(sum, maxSum);
//         } 
//     }
//     cout<<maxSum;
//     return 0;
// }



// // Kadane's algorithm for the above using only one iteration
// #include "bits/stdc++.h"
// using namespace std;
// int main(void){
//     int n, sum=0;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int maxSum = INT_MIN;
//     int currSum = 0; 
//     for(int i=0; i<n; i++){
//         currSum += arr[i];
//         if(currSum < 0){
//             currSum = 0;
//         }
//         maxSum = max(currSum, maxSum);
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }


// maximum circular subarray sum
// max subarray sum = total sum of array - sum of non-contributing elements
// #include "bits/stdc++.h"
// using namespace std;

// int kadane(int arr[], int n){
//     int currsum = 0, maxSum = INT_MIN;
//     for(int i=0; i<n; i++){
//         currsum += arr[i];
//         if(currsum < 0){
//             currsum = 0;
//         }
//         maxSum = max(currsum, maxSum);
//     }
//     return maxSum;
// }
// int main(void){
//     int n, sum=0;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the array elements: "<<endl;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int wrapSum;
//     int nonwrapSum;

//     nonwrapSum = kadane(arr, n);
//     int totalSum = 0;
//     for(int i=0; i<n; i++){
//         totalSum += arr[i];
//         arr[i] = -arr[i];
//     }
//     wrapSum = totalSum + kadane(arr, n);

//     cout<<max(wrapSum, nonwrapSum)<<endl;
//     return 0;
// }


// pair sum problem
#include "bits/stdc++.h"
using namespace std;

bool pairsum(int arr[], int n, int k){
    int i=0; int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] == k){
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(arr[i]+arr[j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(void){
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};  // array should be sorted
    int k = 31;
    cout<<pairsum(arr, 8, k)<<endl;
}