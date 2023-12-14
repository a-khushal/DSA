// character arrays: 
// -> Need to know size beforehand
// -> Larger size required for operations(concatenate or append).
// -> No terminating extra character.

// Strings:
// -> No need to know size beforehand
// -> Performing operations like concatenation and append is easier.
// -> Terminated with a special character '\0'

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){

    // string str;

    // string str1(5, 'n'); // str1 store nnnnn
    // cout<<str1<<endl;
    
    // // str = "phoenix";
    // // cout<<str<<endl;

    // // cin>>str;  // cin is used to get only a single word
    // getline(cin, str);  // to input sentenses.
    // cout<<str<<endl;


    // built-in functions

    // string s1 = "he";
    // string s2 = "llo";
    // // s1.append(s2);
    // // cout<<s1+" "+s2<<endl;    
    // s1 = s1+s2;
    // cout<<s1<<endl;
    // cout<<s1[1]<<endl;

    // string abc = "jjlfhfdka ouehwiohlfhsl okjhdasf";
    // abc.clear();
    // cout<<abc<<endl;

    // string s1 = "phoenix", s2 = "fire";
    // int val = s2.compare(s2);  // 0
    // int val = s1.compare(s2);  // 1 ascii of p > ascii of f
    // int val = s2.compare(s1);  // -1 ascii of f < ascii of p
    // cout<<val<<endl;

    string s1 = "nincompoop";
    cout<<s1<<endl;

    // s1.clear();

    // if(s1.empty()){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    // s1.erase(3, 3);  //  starting index and number of characters to erase includeing the starting index.

    // cout<<s1<<endl;

    // cout<<s1.find("com")<<endl;  // returns the index of the first character of substring if found in the main string

    // s1.insert(2, "lol");
    // cout<<s1<<endl;

    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;


    string s = s1.substr(6, 4);  // start index and length of substring required
    cout<<s<<endl;

    string s2 = "844";
    int x = stoi(s2);  // string to integer function
    cout<<x+3<<endl;

    int y = 978;
    cout<<to_string(x)+"2"<<endl;


    string s3 = "opruehwophkdsnaskjhhfeaiwphpq30khfeew";
    // to sort the string s3 we first include header file algorithm
    sort(s3.begin(), s3.end());
    cout<<s3<<endl;

    // .begin() and .end() gives the starting and ending iterators


    return 0; 
}