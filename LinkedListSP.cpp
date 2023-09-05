#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){}
    Node(int value){
        data= value;
        next = NULL;
    }
    Node *createNode(int value){
    return new Node(value);
    //cout<<newNode;
    }
};

Node *head = NULL;
void insert(int data, int n)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    // function to insert node at position 1.
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }

    //inserting at the given position
    Node* temp2 = head;

    //traversing
    for(int i=0; i<n-2; i++){
        temp2=temp2->next;
    }

    //updating the link
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void display(){
    while (head != NULL) {
        cout <<head->data<<" ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node n;
    n.createNode(21);

    insert(4, 2);

    display();
}
