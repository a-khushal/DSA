// #include <iostream>
// using namespace std;

// int main(void){
//     int n, m;
//     cin>>n>>m;

//     int arr[n][m];

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     // spiral order print

//     int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;

//     while(row_start<=row_end && column_start<=column_end){
//         // for row_start
//         for(int col=column_start; col<=column_end; col++){
//             cout<<arr[row_start][col]<<" ";
//         }
//         row_start++;

//         // for column_end
//         for(int row=row_start; row<=row_end; row++){
//             cout<<arr[row][column_end]<<" ";
//         }
//         column_end--;

//         // for row_end
//         for(int col=column_end; col>=column_start; col--){
//             cout<<arr[row_end][col]<<" ";
//         }
//         row_end--;

//         // for column_start
//         for(int row=row_end; row>=row_start; row--){
//             cout<<arr[row][column_start]<<" ";
//         }
//         column_start++;
//     }

//     return 0;
// }



// // transpose
// #include <iostream>
// using namespace std;

// int main(void){
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     // accessing only upper triangle elements
//     for(int i=0; i<3; i++){
//         for(int j=i; j<3; j++){
//             // swap
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // matrix multiplication
// #include <iostream>
// using namespace std;

// int main(void){

//     int n1, n2, n3;

//     cin>>n1>>n2>>n3;

//     int arr1[n1][n2], arr2[n2][n3], arr3[n1][n3];

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             cin>>arr1[i][j];
//         }
//     }

//     for(int i=0; i<n2; i++){
//         for(int j=0; j<n3; j++){
//             cin>>arr2[i][j];
//         }
//     }

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             arr3[i][j] = 0;
//         }
//     }

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             for(int k=0; k<n2; k++){
//                 arr3[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }

//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             cout<<arr3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// matrix search

// rows are sorted from left to right in ascending order 
// columns are sorted from top to bottom in ascending order 

// // brute force: linear search
// #include <iostream>
// using namespace std;

// int main(void){
//     int n,m;
//     cin>>n>>m;

//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int ns; int k=0;
//     cin>>ns;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == ns){
//                 k=1;
//                 break;
//             }
//         }
//     }

//     if(k==1){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
// }


// ***
// optimized approach
#include <iostream>
using namespace std;

int main(void){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int ns;
    cin>>ns;

    bool found = false;
    int r=0, c=m-1; // top right position
    while(r<n && c>=0){
        if(arr[r][c] == ns){
            found = true;
        }
        if(arr[r][c]>ns){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}