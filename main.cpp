#include <iostream> //preprocessor command
#include <string>
using namespace std;

int sum(int a1, int a2)
{
    return a1 + a2;
}

class employee
{
public:
    string name;
    int salary;
};

int main()
{
    // cout << "Hello World!\n";
    // cout << "Hello World!" << endl;
    // cout << "NextLine" << endl;
    // int a = 95;
    // cout << a;
    // cout << "\nThe marks of the student in english is: " << a;
    // float const score = 3;
    // cout << "\nThe score is: " << score;
    // score = 12; since score is constant variable you cannot reassign it

    // int b, c;
    // cout << "\nEnter a number: ";
    // cin >> b;
    // cout << "Enter a number: ";
    // cin >> c;
    // cout << "The sum is " << b + c << endl;
    // cout << "b / c = "<< (double)b/c<<endl;
    // c++ has string datatype
    // std::cout << "Hello World!\n"; // if using namespace std is not specified
    // above

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age > 150 || age < 1)
    //     cout << "Invalid age" << endl;
    // else if (age >= 18)
    //     cout << "You are eligible to vote";

    // else
    //     cout << "You aren't eligible to vote";

    // for(int i=0; i<=5; i++)

    // int b, c;
    // cout << "\nEnter a number: ";
    // cin >> b;
    // cout << "Enter a number: ";
    // cin >> c;
    // cout << "The sum is " << sum(b, c) << endl;

    // int arr[3] = {1,2,3};
    // cout<<arr[0];

    // string name = "Phoenix";
    // cout<<name<<endl;
    // cout<<name.length()<<endl;
    // cout<<name.substr(0, 3)<<endl;
    // cout<<name;

    // int a = 64;
    // int* ptra;
    // ptra = &a;
    // cout<<*ptra;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    // employee abc;
    // abc.name = "a";
    // abc.salary = 500;
    // cout<<"name is: "<<abc.name<<endl;
    // cout<<"salary: "<<abc.salary<<endl;

    int a;
    a=12;
    cout<<"size of int "<<sizeof(a)<<endl;
    cout<<"size of float "<<sizeof(float)<<endl;

    return 0;
}