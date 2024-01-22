// refer linked_lists.txt for notes


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
 
    // check if list is empty or only one element in the list
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


// important******
// detection and removal of cycle in linked lists: based on Floyd's algorithm/Hare and Tortoise Algorithm

// cycle in linked list is when a single node is pointed by multiple ones(when both hare and tortoise reach the same node while traversing considering hare moves 2 nodes and tortoise moves by 1)

void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    // finally temp points to last node then we make it to point to the startNode(node from which cycle starts)
    temp->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    // fast is always ahead of slow so we check the condition for fast
    while((fast != NULL) && (fast->next != NULL)/* if fast->next == NULL then we can't find fast->next->next*/){
        // slow moves to next and fast moves to next's next i.e., slow=tortoise, fast=hare
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

// first make fast and slow come at same node(fast 2 nodes and slow 1 node) now make one of them point head node keeping the other at same node. Now start moving both the nodes by one node each until both fast and slow's next point the same node and then make next of the pointer which didn't point the head node NULL 
void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}


int length(node* &head){
    int l=0;
    node* temp=head;
    while(temp->next != NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* append_last_k_nodes(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail = head;

    int l=length(head);
    int count = 1;
    k=k%l;

    while(tail->next != NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next=head;
    
    return newHead;
}


void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}


// time complexity is O(length of larger linked list)
int intersection(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = l1-l2;
    node* ptr1;
    node* ptr2;
    // we'll make ptr1 pointing to head of the largest linked list ptr2 to the shorter linked list
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    // we'll point ptr1 to a node that corresponds to ptr2
    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1 == ptr2){
            return ptr1->data; // or ptr2->data
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}


// iterative way
node* merge(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;
    while(p1!=NULL && p2!= NULL){
        
        if(p1->data<p2->data){
            p3->next = p1;
            p1=p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while(p1!= NULL){
        p3->next = p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next = p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
}

// recursive way O(m+n) length of lists
node* mergeRecursive(node* &head1, node* &head2){

    if(head1==NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    node* result;
    if(head1->data<head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}


int main(void){

    // node* head = NULL;
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // display(head);
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
    // int k=3;
    // node* newHeadK = reversek(head, k);
    // display(newHeadK);


    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);
    // makeCycle(head, 3);
    // // display(head);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    // display(head);


    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);
    // display(head);
    // node* newHead = append_last_k_nodes(head, 3);
    // display(newHead);

    node* head1 = NULL;
    node* head2 = NULL;

    // insertAtTail(head1, 1);
    // insertAtTail(head1, 2);
    // insertAtTail(head1, 3);
    // insertAtTail(head1, 4);
    // insertAtTail(head1, 5);
    // insertAtTail(head1, 6);
    // insertAtTail(head2, 9);
    // insertAtTail(head2,10);
    // intersect(head1, head2, 5);
    // display(head1);
    // display(head2);
    // cout<<intersection(head1, head2)<<endl;


    insertAtTail(head1, 1);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);
    display(head1);
    display(head2);
    node* newHead = mergeRecursive(head1, head2);
    display(newHead);
    return 0;
}