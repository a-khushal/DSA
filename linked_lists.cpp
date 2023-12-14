#include <iostream> 
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

// insert at tail

void insertAtTail(node* &head, int val){
    node* n = new node(val);  // it creates a new node whose data = val and whose next is NULL
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node* head){
    node* toDelete = head;
    head=head->next;
    delete toDelete; // delete to prevent memory leak

}

void deleteNode(node* &head, int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete; // delete to prevent memory leak
}

int main(void){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 10);
    display(head);
    // cout<<search(head, 5)<<endl;
    // deleteNode(head, 3);
    // display(head);
    deleteAtHead(head);
    display(head);



    return 0;
}