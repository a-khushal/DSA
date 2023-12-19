// stack is a linear ds
// this has LIFO(last in first out): add and remove from the same side
// push() ->pushed at top
// pop() -> pops the topmost element of the stack
// top() -> returns the topmost value using top pointer
// empty()  -> returns true is stack is empty

// all these operations happen in constant time i.e., O(1)

// top is -1 when the array is empty

#include <iostream>
using namespace std;
#define n 10

class stack{
    int *arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }
    
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main(void){
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;   // 1->true; 0->false

}