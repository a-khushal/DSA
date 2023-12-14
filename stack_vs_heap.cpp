// dynamic memory location

// heap is free store it has no fixed size
// it's size can be as big as the virtual memory of the system
// new is used to allocate memory in heap
// normal declaration of variables stores them in stack

#include <iostream>
using namespace std;

int main(void){
    int a = 10;  // stored in stack
    int *p = new int();  // allocate memory in heap
    *p = 10;
    delete(p);  // deallocate memory from heap
    p = new int[4];

    delete[]p;
    p = NULL;
    
    return 0;
}


// in stack memory allocation and deallocation happens automatically
// but in heap memory allocation and deallocation should be done manually

// dangling pointer is the one that points to a memory location where no value is stored