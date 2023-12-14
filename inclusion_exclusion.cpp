// The Principle of Inclusion and Exclusion (PIE) is a counting technique used to find the number of elements in the union of two finite sets.0 It ensures that elements satisfying more than one property are not counted twice by summing the number of elements that satisfy at least one of two categories and subtracting the overlap.1 The formula for PIE is n(ABC) = n(A) + n(B) + n(C) - n(AB) - n(AC) - n(BC) + n(ABC). PIE can be represented by a Venn diagram for three sets.

// question: how many numbers between 1 and 1000 are divisible by 5 or 7
// note: the number of multiples of a upto n is n/a

// #include <iostream>
// using namespace std;

// int divisibleByaorb(int n, int a, int b){
//     int c1 = n/a;
//     int c2 = n/b;
//     int c3 = n/(a*b);

//     return c1+c2-c3;
// }

// int main(void){
//     int n, a, b;
//     cin>>n>>a>>b;

//     cout<<divisibleByaorb(n, a, b)<<endl;
//     return 0;
// }



// Euclid's algorithm to find the GCD

#include <iostream>
using namespace std;

int gcd(int a, int b){
    // int min = a<b?a:b;
    // int max = a>b?a:b;
    // int d = 1;
    // while(d>0){
    //     d = max % min;
    //     if(d == 0)
    //         break;
    //     max = min;
    //     min = d;
    // }
    // cout<<min<<endl;

    while(b!=0){
        int d = a % b;
        a = b;
        b = d;
    }
    return a;
}

int main(void){
    
    cout<<gcd(24, 42)<<endl;
    return 0;
}

