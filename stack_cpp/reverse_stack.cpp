// we need to reverse in the same stack not copy in another one
// use recursion

#include <iostream>
#include <stack>
using namespace std;


void insertAtBottom(stack<int> &st, int ele){
    
    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topele);
}

// call by referrence -> we'll make changes in the same stack
void reverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, ele);
}

int main(void){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"before"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverseStack(st);
    cout<<"after"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}