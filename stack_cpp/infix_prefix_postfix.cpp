// infix expression: 2+3, a*c+d, (8/2)-5
// Precedence: (), {}, [] >> ^ >> *,/ >> +,-
// ^ -> right to left associativity
// *,/ -> left to right associativity
// +, - -> left to right associativity

#include <iostream>
#include <stack>
#include <math.h>
#include <algorithm>
using namespace std;


// start iterating from the last and op1 is the top op2 is below top
int preFixEvaluation(string s){
    stack<int> st;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return st.top();
}



// start iterating from the first and op2 is the top op1 is below top, complexity: O(l), l is the length of string that is passed to the fn
int postFixEvaluation(string s){
    stack<int> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); // char to integer
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return st.top();
}

int precedence(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*'||ch=='/'){
        return 2;
    }
    else if(ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
// push if the operator has less precedence then the top of the stack operator, if it has higher precedence check with the top of stack operator, if less the push if more then pop unitl an operator of less precendce is found and then push the current operator
void infixToPostFix(string s){
    stack<char> st;
    string res;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res += st.top();
                st.pop();
            }   
            // pop '('
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())>(precedence(s[i]))){
                res+=st.top();
                st.pop();
            }
            // push the current operator
            st.push(s[i]);
        }
    }
    // check finally if the stack if empty or not if not pop'em all
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    cout<<res<<endl;
 }

// same algo as infix to postfix just reverse the passed string first and convert '(' -> ')' and ')' -> '(' then finally reverse obtained result

// check this
string infixToPrefix(string s){
    reverse(s.begin(), s.end());
    stack<char> st;
    string res;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i] == ')'){
            st.push(s[i]);
        }
        else if(s[i]!='('){
            while(!st.empty() && st.top()!=')'){
                res += st.top();
                st.pop();
            }   
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && (precedence(st.top())>=precedence(s[i]))){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(void){
    
    // cout<<preFixEvaluation("-+7*45+20")<<endl;

    // cout<<postFixEvaluation("46+2/5*7+")<<endl;
    // cout<<postFixEvaluation("123*4*5/67-+8++")<<endl;

    // infixToPostFix("(a-b/c)*(a/k-l)");
    cout<<infixToPrefix("(a-b/c)*(a/k-l)")<<endl;
    
    return 0; 
}