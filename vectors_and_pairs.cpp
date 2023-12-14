// vectors are dynamic arrays, their size need not be specified while declaring it
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}

int main(void){
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // // for(int i=0; i<v.size(); i++){
    // //     cout<<v[i]<<endl;
    // // }

    // // vector<int>::iterator it;
    // // for(it=v.begin(); it!=v.end(); it++){
    // //     cout<<*it<<endl;
    // // }
    
    // // for(auto element:v){
    // //     cout<<element<<endl;
    // // }

    // v.pop_back();
    
    // vector<int> v2(3, 50);
    // // 50 50 50

    // swap(v, v2);

    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    // for(auto element:v2){
    //     cout<<element<<endl;
    // }

    // sort(v.begin(), v.end());


    // pair<int,char> p;
    // p.first = 442;
    // p.second = 'a';

    int arr[] = {10,16,7,14,5,3,2,9};
    vector <pair<int, int>> v;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        v.push_back(make_pair(arr[i], i));
    }   
    sort(v.begin(), v.end(), myCompare);
    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i;
    }
    for(int i=0; i<v.size(); i++){
        cout<<arr[i]<<" ";
    }


    // cout<<sizeof(arr)<<endl;  // 8 * 4 = 32
    // cout<<sizeof(arr[0])<<endl; // 4

    return 0;
}