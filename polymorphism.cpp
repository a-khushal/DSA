// polymorphism: many forms
// types: compile time and run time
// subtypes: compile time: function overloading, operator overloading
//           run time: virtual functions

// function overloading: when there are diff fns with same name but have diff no of args or diff types of args
// operator overloading: + can add two real numbers but in case of complex numbers we need to define what + does
// virtual functions: during inheritence if base class and derived class  have the same function then complier doesn't get to know which one to consider, so virutal keyword is used in function definition. Whenever a virtual keyword is used it won't be called. We add virtual keyword in base class


// #include "bits/stdc++.h"
// using namespace std;


// function overloading:
// class college{
//     public:
//         void func(){
//             cout<<"A fn with no args"<<endl;
//         }
//         void func(int x){
//             cout<<"A fn with int arg"<<endl;
//         }
//         void func(double x){      
//             cout<<"A fn with double arg"<<endl;
//         }
// }; // add ; after the class

// int32_t main(){
//     college obj;
//     obj.func();
//     obj.func(4);
//     obj.func(3.324);
// }


// operator overloading: 
// #include "bits/stdc++.h"
// using namespace std;
// class Mycomplex{
//     private:
//         int real, imaginary;
//         public: 
//             Mycomplex(int r=0, int i=0){
//                 real = r;
//                 imaginary = i;
//             }
//         Mycomplex operator + (Mycomplex const &obj){
//             Mycomplex res;
//                             // current imaginary part + object's imaginary
//             res.imaginary = imaginary + obj.imaginary;
//             res.real = real + obj.real;
//             return res;
//         }
//         void display(){
//             cout<<real<<" + i"<<imaginary<<endl;
//         }
// };

// int32_t main(){
//     Mycomplex c1(1,2), c2(3,4);
//     Mycomplex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }



// virtual functions/ runtime polymorphism
#include "bits/stdc++.h"
using namespace std;

class baseClass{
    public:
        virtual void printfn(){
            cout<<"this is base class's print fn"<<endl;
        }
        void display(){
            cout<<"this is the base class's display fn"<<endl;
        }
};

class derivedClass: public baseClass{
    public:
        void printfn(){
            cout<<"this is derived class's print fn"<<endl;
        }
        void display(){
            cout<<"this is derived class's display fn"<<endl;
        }
};

int32_t main(){

    baseClass *baseptr;
    derivedClass d;

    baseptr = &d;

    baseptr -> printfn();

    baseptr -> display();

    return 0;
}