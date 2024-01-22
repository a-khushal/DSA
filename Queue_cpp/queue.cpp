// Queue: Stores a list of items in which an item can be inserted at one end and removed from the other end only
// here FIFO
// operations: we have two pointers front and back in queue, 
// i) enqueue(x) -> like push operation, back pointer moves
// ii) dequeue(x) -> like pop, removed where front pointer is pointing
// iii) peek() -> tells what value at front pointer
// iv) empty() -> tells whether queue is empty or not

// [1,2]
// front, back(0th and 1st respectively)

#include <iostream>
using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

    void push(int x){
        if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"NO elements in queue"<<endl;
            return;
        }
        cout<<"element removed is: "+arr[front]<<endl;
        front++;
    }

    void peek(){
        if(front==-1 || front>back){
            cout<<"NO elements in queue"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }

    void empty(){
        if(front==-1 || front>back){
            cout<<"NO elements in queue"<<endl;
        }
        else{
            cout<<"queue isn't empty"<<endl;
        }
    }
    void display(){
        int i=0;
        while(i<=back){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
};


int main(void){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.pop();
    q.peek();
    q.empty();
}





// Linked List implementation of queue
// why use liked lists: cuz in arr if we declare it's size as 100 and store 5 elements in queue then remaining memory goes wasted also arr is fixed in size, we need to increase the size of arr if queue size is bigger than the size of arr.

// #include <iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// class queue{
//     node* front;
//     node* back;

//     public:
//     queue(){
//         front=NULL;
//         back=NULL;
//     }

//     void push(int x){
//         node* n = new node(x);

//         // empty queue
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop(){
//         if(front==NULL){
//             cout<<"queue underflow"<<endl;
//             return;
//         }
//         node*  todelete = front;
//         front = front -> next;
//         delete todelete;
//     }

//     void peek(){
//         if(front==NULL){
//             cout<<"No elelemt in queue"<<endl;
//             return;
//         }
//         cout<<front->data<<endl;
//     }

//     void empty(){
//         if(front==NULL){
//             cout<<"list's empty"<<endl;
//         }
//         else{
//             cout<<"list's isn't empty"<<endl;
//         }
//     }

// };

// int main(void){
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.pop();
//     q.peek();
//     q.empty();
// }