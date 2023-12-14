#include "bits/stdc++.h"
using namespace std;

class student{
    // Data members of the class, they are by default private 
    string name;
    public:
    int age;
    string gender;


    // invoked when an object is created without passing the parameters
    student(){
        cout<<"default constructor"<<endl;
    }

    // constructor --> Parameterized constructor
    student(string s, int a, string g){
        cout<<"Parameterized constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // copy constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // shallow copy and deep copy:
    // default copy constuctor does shallow copy i.e., if an object is pointing to a dynamically allocated memory locations, these memory locations won't be copied in shallow copy but will be copied in deep copy

    // consturctors are called when an object of the class is created 
    // destructors are called when an object is destroyed i.e., when control moves out of main function i.e., return 0

    // destructor: 
    ~student(){
        cout<<"Destructor called"<<endl;
    }


    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<" "<<age<<" "<<gender;
    }

    void printInfo(){
        cout<<"Name: "<<name<<" age: "<<age<<" gender: "<<gender<<endl;
    } 



    // we need to define what == does here for c==a written below
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
};

int main(){
    // student arr[3];  // array of typf student
    // for(int i=0; i<3; i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0; i<3; i++){
    //     arr[i].printInfo();
    // }
    
    student a("phoenix", 19, "male");
    // a.printInfo();
    student b;
    student c = a; // c is copy constructor

    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}