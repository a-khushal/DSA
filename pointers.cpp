// pointers are variables that store the address of other variables
// int a = 10;
// int *ptr;
// ptr = &a;

// cout<<&a<<endl;  // address of a
// cout<<ptr<<endl; // address of a
// cout<<*ptr<<endl; // value stored in a

#include <iostream>
using namespace std;


void increment(int *a){
    ++(*a);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){

    // int a = 10;
    // int *ptr = &a;
    
    // cout<<*ptr<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;

    // *ptr = 20;

    // cout<<a<<endl; 
    // cout<<ptr<<endl; 
    // cout<<++ptr<<endl; 

    // float b=20.3;
    // float *bptr = &b;
    // cout<<(int)bptr<<endl; 
    // cout<<(int)bptr+1<<endl; 


    // int arr[] = {10, 20, 30};
    // cout<<arr<<endl;    // points to the zeroth element of the array
    // cout<<*arr<<endl;   // gives the value at zeroth position
    // cout<<endl;
    // int *ptr = arr;
    // for(int i=0; i<3; i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    //     // cout<<*arr<<endl;
    //     // arr++;  // illegal: cuz arr is a constant value/pointer
    //     cout<<*(arr+i)<<endl;
    // }


    // int a = 10;
    // int *p;
    // p = &a;
    // int **q = &p;

    // cout<<*p<<endl;
    // cout<<*q<<endl;


    int a = 2;
    int b = 4;

    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    increment(&a);
    cout<<a<<endl;


    return 0; 
}

// pointer arithmetic
// we can increment, decrement, add, subtract only with pointers


// pointers and arrays
// int arr[] = {10, 20, 30};
// arr points to the 0th element of the array it is a constant value

// pointer to pointer
// int a = 10;
// int *p;
// p = &a;
// int **q = &p;

// cout<<p<<endl;
// cout<<q<<endl;

// p stores address of a
// *p gives value at a
// q stores address of p
// *q stores address of a i.e, value stored in p
// **q stores value at a 