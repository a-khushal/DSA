// ex: 
// Hey, how are you doing?
// doing? you are how Hey,

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    s = s + " ";
    string str = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            str+=s[i];
        }
        else{
            st.push(str);
            str="";
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    } cout<<endl;
}

int main(void){
    
    string s = "Hey, how are you doing";
    reverseSentence(s);

    return 0;
}