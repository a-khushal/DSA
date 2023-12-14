#include <iostream>
using namespace std;


int getBit(int n, int pos){
    return (n & (1<<pos))!=0;  // returns 1 if not zero, and 0 if zero
}

// unset=>put zero in that position
// set=>put one in that position

int setBit(int n, int pos){
    return (n | (1<<pos));  // returns 1 if not zero, and 0 if zero
}

int clearBit(int n, int pos){
    return (n & ~(1<<pos));
}


// update is clear and set bit
int updateBit(int n, int pos, int x){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (x<<pos));
}
int main(void){
    cout<<getBit(5, 2)<<endl;
    // cout<<setBit(5, 1)<<endl;
    // cout<<clearBit(5, 2)<<endl;
    cout<<updateBit(5, 1, 1)<<endl;
    return 0;
}