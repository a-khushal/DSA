// refer linked_lists.txt for notes

#include <iostream> 
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp->next = n;
    n->prev = temp;
    n->next = NULL;
    // n->next = NULL;// see constructor the new node's next will be pointed to null so doesn't make a difference in writing this
}

void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    head->prev = NULL;
    delete toDelete;
}

void deletion(node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
    }

    node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    if(temp->next != NULL){ 
        temp->next->prev = temp->prev; 
    }
    delete temp;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(void){

    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 10);
    deletion(head, 1);
    deleteAtHead(head);
    display(head);

    return 0;
}