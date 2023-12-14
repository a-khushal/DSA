// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(void){
    // string str = "khkjldasjhlk545612;'nflkdash";

    // // for(int i=0; i<str.length(); i++){
    // //     // if(str[i]>=97 && str[i]<=122){
    // //     if(str[i]>='a' && str[i]<='z'){
    // //         str[i] -= 32;
    // //     }
    // //     // else if(str[i]>=65 && str[i]<=90){
    // //     else if(str[i]>='A' && str[i]<='Z'){
    // //         str[i] += 32;
    // //     }
    // // }
    // // cout<<str<<endl;

//     string s = "fdsahfkhqwklhk";
//     transform(s.begin(), s.end(), s.begin(), ::toupper);
//     cout<<s<<endl;

//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     cout<<s<<endl;


//     return 0;
// }




// biggest number from the numeric string

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(void){
//     string st = "90524709";

//     sort(st.begin(), st.end(), greater<int>());  // to sort in reverse order we pass the third argument
    
//     cout<<st<<endl;

//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    string st = "jhihhhfhsa";
    // int freq = 0, mx = 0;

    // for(int i=0; i<st.size(); i++){
    //     for(int j=0; j<st.size(); j++){
    //         if(st[i] == st[j]){
    //             freq++;
    //         }
    //     }
    //     if(freq>mx){
    //         mx=freq;
    //     }
    //     freq = 0;
    // }
    // cout<<mx<<endl;


    int frequency[26];
    for(int i=0; i<26; i++)
        frequency[i] = 0;

    for(int i=0; i<st.size(); i++)
        frequency[st[i]-'a']++;  // every index points to an alphabet
    
    char ans = 'a'; int maxfreq = 0;
    for(int i=0; i<26; i++){
        if(frequency[i]>maxfreq){
            maxfreq  = frequency[i];
            ans = i + 'a';
        }
    }

    cout<<maxfreq<<" "<<ans<<endl;
    return 0;
}


