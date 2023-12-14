#include <iostream>
using namespace std;
#include <math.h>

// bool isPrime(int num)
// {
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// int main(void)
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << endl;
//         }
//     }
// }


// nCr

// int fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++)
//         factorial *= i;
//     return factorial;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;

//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;
//     return 0;
// }


// Pascal Triangle

// every number of this triangle is nCr where n is row and r is column i.e., iCj

int fact(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++)
        factorial *= i;
    return factorial;
}

int main(void){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}
