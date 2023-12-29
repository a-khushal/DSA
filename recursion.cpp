#include <iostream>
using namespace std;

int add(int n){
    int sum = 0;
    if(n==0){
        return 0;
    }
    sum = n + add(n-1);
    return sum;
}


int power(int n, int p){
    int pdt = 0;
    if(p==0){
        return 1;
    }
    pdt = n * power(n, p-1);
    return pdt;
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);;
}


int fib(int n){
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }
    // the above 2 if statements can be written as:
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

bool sorted(int arr[], int n){
    // if(arr[0]<arr[1] && restArray){
    //     return true;
    // }
    // return false;

    if(n==1){ // one element in the array implies sorted itself
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}


void decrease(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decrease(n-1);
}

void increase(int n){
    if(n==0){
        return;
    }
    increase(n-1);
    cout<<n<<" ";
}

void reverseString(string st){
    if(st.length() == 0){
        return;
    }

    string restOfString = st.substr(1);
    reverseString(restOfString);
    cout<<st[0]; 
}

void replacePI(string st){
    if(st.length() == 0){
        return;
    }

    // mine
    // int i=0;
    // if(st[i] == 'p' && st[i+1] == 'i'){
    //     cout<<"3.14";
    // }
    // else{
    //     cout<<st[i+1];
    // }
    // string restOfString = st.substr(1);
    // replacePI(restOfString);


    if(st[0] == 'p' && st[1] == 'i'){
        cout<<"3.14";
        replacePI(st.substr(2));
    }
    else{
        cout<<st[0];
        replacePI(st.substr(1));
    }
}

void towerOfHanoi(int n, char source, char destination, char helper){
    // base case
    if(n==0){
        return;
    }
    towerOfHanoi(n-1, source, helper, destination);
    cout<<"Move from "<< source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, helper, destination, source);
}

string removeDuplicate(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

string movextoend(string s){
    if(s.length() == 0)
        return "";
    char ch = s[0];
    string ans = movextoend(s.substr(1));
    if(ch == 'x'){
        return (ans+ch);
    }
    return (ch+ans);
}

void substrings(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string restofstring = s.substr(1);

    substrings(restofstring, ans);
    substrings(restofstring, ans+ch);
}

void substringswithascii(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int ascii = ch;
    string restofstring = s.substr(1);

    substringswithascii(restofstring, ans);
    substringswithascii(restofstring, ans+ch);
    substringswithascii(restofstring, ans+ to_string(ascii));
}

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};

void keypad(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string restofstring = s.substr(1);
    for(int i=0; i<code.length(); i++){
        keypad(restofstring, ans+code[i]);
    }
}


void permutations(string str, string ans){
    if(str.length() == 0){
        cout<<ans<<endl;
        return; 
    }

    for(int i=0; i<str.length(); i++){
        char ch = str[i]; // fixed character
        string restofstring = str.substr(0, i) + str.substr(i+1);
        permutations(restofstring, ans+ch);
    }
}

int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1; i<=6; i++){
        count += countPath(s+i, e);
    }
    return count;
}

int countPathMaze(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return (countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1));
}

int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1)+tilingWays(n-2);
}

int friendsPair(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return friendsPair(n-1)+friendsPair(n-2)*(n-1); // to pair nth person we have n-1 options also if pair then n-2 left
}

int knapsack(int value[], int wt[], int n, int W){

    if(n==0||W==0)
        return 0;
    if(wt[n-1]>W)
        return knapsack(value, wt, n-1, W);
    
    return max(knapsack(value, wt, n-1, W-wt[n-1]) + value[n-1], knapsack(value, wt, n-1, W));
}

int main(void){
    // int n, p;
    // cin>>n>>p;

    // cout<<power(n, p)<<endl;
    // cout<<fact(5)<<endl;
    // cout<<fib(4)<<endl;
    // int arr[] = {1,2,3,4,5,7,6};
    // cout<<sorted(arr, 7)<<endl;

    // int n;
    // cin>>n;

    // // decrease(n);
    // increase(n);

    // string str = "phoenix";
    // string str2 = str.substr(1); // prints string starting from the index given in substr function
    // cout<<str2<<endl;

    // reverseString("binod"); 
    // replacePI("ppipppoxpip");

    // towerOfHanoi(3, 'A', 'C', 'B');

    // cout<<removeDuplicate("aaaabbbeeecdddd")<<endl;
    // cout<<movextoend("abxxcxxdefwx")<<endl;


    // all substrings of a string
    // "ABC": "", "A", "B", "C", "AB", "BC", "AC", "ABC"
    // number of substrings = 2^ni

    // substrings("ABC", "");

    // substringswithascii("AB", "");

    // keypad("23", "");

    // permutations("ABC", "");

    // cout<<countPath(0, 3)<<endl;

    // cout<<countPathMaze(3, 0, 0)<<endl; 

    // cout<<tilingWays(4)<<endl;

    // cout<<friendsPair(4)<<endl;

    // int wt[] = {10, 20, 30};
    // int value[] = {100, 50, 150};
    // int W = 50;

    // cout<<knapsack(value, wt, 3, W)<<endl;

    return 0;

}