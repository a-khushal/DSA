#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParanthesis(string s){

    int l = s.length();
    stack<char> st;
    bool ans = true;

    for(int i=0; i<l; i++){
        if(s[i]=='(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() && s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if(!st.empty()){
        return false;
    }
    return ans;

}

int main(void){

    string s = "{{([])}";
    if(isBalancedParanthesis(s)){
        cout<<"Balanced paranthesis"<<endl;
    }
    else{
        cout<<"Unbalanced Paranthesis"<<endl;
    }
    return 0;
}