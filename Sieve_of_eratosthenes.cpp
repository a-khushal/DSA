// // used to print the prime numbers until a given range

// #include <iostream>
// using namespace std;

// void primeSieve(int n){
//     int prime[100] = {0};

//     for(int i=2; i<=n; i++){
//         if(prime[i] == 0){
//             for(int j=i*i; j<=n; j+=i){
//                 prime[j] = 1;
//             }
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(prime[i] == 0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(void){
//     int n;
//     cin>>n;

//     primeSieve(n);

//     return 0;
// }



// Prime Factorization using sieve algorithm

#include <iostream>
using namespace std;

void primeFactor(int n){
    int spf[100] = {0};
    // spf is an array of smallest prime factor
    for(int i=2; i<=n; i++){
        spf[i] = i;  // the smallest prime factor for prime numbers is the number itself
    }

    for(int i=2; i<=n; i++){
        if(spf[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n / spf[n];
    }
}

int main(void){

    int n;
    cin>>n;

    primeFactor(n);
    return 0;
}