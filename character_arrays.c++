// declaration char ch[n+1]
// we consider n+1 length array cuz the last character will be a null character '\0'  ex: "phoenix\0"

// #include <iostream>
// using namespace std;

// int main(void){

//     // char arr[100] = "phoenix";

//     // int i=0;
//     // while(arr[i] != '\0'){
//     //     cout<<arr[i]<<endl;
//     //     i++;
//     // }

//     // input and output of character array: it's same as any integer value input and output
//     char ch[50];
//     cin>>ch;
//     // cout<<ch;
//     cout<<ch[2];

//     return 0;
// }


// // check palindrome
// #include <iostream>
// using namespace std;

// int main(void){

//     int n;
//     cin>>n;

//     char ch[n+1];
//     cin>>ch;

//     bool palin = true;

//     for(int i=0; i<n; i++){
//         if(ch[i] != ch[n-1-i]){
//             palin = 0;
//             break;
//         }
//     }

//     if(palin == true)
//         cout<<"palindrome";
//     else
//         cout<<"not palindrome";

//     return 0;
// }


// // largest word in a sentence

// #include <iostream>
// using namespace std;

// int main(void){
//     char ch[100];
//     char ch1[50]; char ch2[50];

//     cout << "Enter a sentence: ";
//     cin.getline(ch, 100);

//     int c=0; int length = 0;
//     while(ch[c] != '\0'){
//         length++;
//         c++;
//     }
//     ch[length] = ' ';
//     int p=0, maxLen=0, ls=0;
//     for(int i=0; i<=length; i++){
//         if(ch[i] != ' '){
//             ch1[p] = ch[i];
//             p++;
//         }
//         else{
//             if(p>maxLen){
//                 ls = i;
//                 maxLen = p;
//             }   
//             for (int j = 0; j < 50; j++) {
//                 ch1[j] = '\0';
//             }
//             p = 0;
//         }
//     } 
//     cout<<maxLen<<endl;
//     for(int i=ls-maxLen; i<ls; i++){
//         cout<<ch[i];
//     }
//     return 0;
// }


// the above from lecture:

// #include <iostream>
// using namespace std;

// int main(void){
//     int n;
//     cin>>n;
//     cin.ignore();
//     char arr[n+1];

//     cin.getline(arr, n);
//     cin.ignore();

//     int i=0; 
//     int currLen=0, maxLen=0;
//     int st=0, maxst=0;

//     while(1){
//         if(arr[i] == ' ' || arr[i] == '\0'){
//             if(currLen>maxLen){
//                 maxLen = currLen;
//                 maxst = st;

//             }
//             currLen = 0;
//             st = i+1;
//         }
//         else
//             currLen++;
//         if(arr[i] == '\0'){
//             break;
//         }
//         i++;
//     }
//     cout<<maxLen<<endl;
//     for(int i=0; i<maxLen; i++){
//         cout<<arr[i+maxst];
//     }
//     return 0;
// }



