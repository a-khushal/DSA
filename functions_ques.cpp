#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<math.h>


bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;
    if(a==x){
        b=y; c=z;
    }
    else if(a == y){
        b=x; c=z;
    }
    else{
        b=x; c=y;
    }

    if(a*a == b*b + c*c )
        return true;
    else
        return false;

}

int main(void){
    int a,b,c;
    int x,y;
    cin>>a>>b>>c;
    if(check(a,b,c))
        cout<<"py triplet";
    else
        cout<<"not py triplet";
    return 0;
}