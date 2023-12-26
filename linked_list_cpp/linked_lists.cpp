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

void insertAtTail(node* &head, int val){
    node* n = new node(val);  // it creates a new node whose data = val and whose next = NULL

    // if linked list is empty
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

void deleteAtHead(node* &head){
    if (head == NULL) {
        return;
    }
    node* toDelete = head;
    head=head->next;
    delete toDelete; // delete to prevent memory leak

}

void deleteNode(node* &head, int val){

    if(head == NULL){
        return;
    }

    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    // temp->next = temp->next->next;
    temp->next = toDelete->next;

    delete toDelete; // delete to prevent memory leak
}


// iterative way of reversing using 3 ptrs;
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// recursive way of reversing the linked list: 
node* reverseRecursion(node* &head){

    // check if list is empty or only one element in head
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newHead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
} 


// reverse k nodes in a linked list(k=1 or 2 or 3...)
// ex: list: 1->2->3->4
//     k=2
//     reverseknodes: 2->1->4->3
// for the first k nodes we'll use iterative method of reversing and for the rest we use recursive method of reversing and O(N) is the time complexity
node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

int main(void){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    // insertAtHead(head, 10);
    // display(head);
    // cout<<search(head, 5)<<endl;
    // deleteNode(head, 3);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // node* newHead = reverse(head);
    // display(newHead);
    // node* newHead1 = reverse(head);
    // newHead1 = reverseRecursion(head);
    // display(newHead);
    int k=2;
    node* newHeadK = reversek(head, k);
    display(newHeadK);



    return 0;
}