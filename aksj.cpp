#include <iostream>
using namespace std;

typedef class Node{
public:
    int data;
    Node *next, *prev;

    Node(int value){
        prev = NULL;
        data = value;
        next = NULL;
    }
}*NodePointer;

NodePointer head = NULL, tail = NULL;

NodePointer createNode(int value){
    return new Node(value);
}

void insertNode(int value){
    NodePointer newNode = createNode(value);
    if(head == NULL){
        head = newNode;
        tail = head;
    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtLast(int value){
    NodePointer newNode = createNode(value);
    if(head == NULL){
        head = newNode;
        tail = head;
    }
    else{
        while(tail->next != NULL){
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtFirst(int value){
    NodePointer newNode = createNode(value);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}


void displayList(){
    NodePointer temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    insertNode(4);
    insertNode(9);
    //insertAtLast(11);
    insertNode(7);
    insertNode(2);

    cout<<"After inserting the elements: ";
    displayList();

    insertAtFirst(1);
    cout<<"After inserting the first element: ";
    displayList();

    insertAtLast(11);

     displayList();


return 0;
}


