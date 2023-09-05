#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* lChild;
        Node* rChild;

        Node(int value){
            data = value;
            lChild = NULL;
            rChild = NULL;
        }
};

Node* createNode(int value){
    return new Node(value);
}

Node* insertNode(Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }
    else if(root->data < value){
        root->rChild = insertNode(root->rChild, value);
    }
    else{
        root->lChild = insertNode(root->lChild, value);
    }
    return root;
}

Node* searchNode(Node* root, int searchKey){
    if(root == NULL){
        return NULL;
    }
    else if(root->data == searchKey){
        return root;
    }
    else if(root->data < searchKey){
        return searchNode(root->rChild, searchKey);
    }
    else{
        return searchNode(root->lChild, searchKey);
    }
}

Node* minValue(Node* root){
    Node* curr = root;
    while(curr != NULL && curr->lChild != NULL){
        curr = curr->lChild;
    }
    return curr;
}

Node* deleteNode(Node* root, int deleteKey){
    if(root == NULL){
        return root;
    }
    else if(root->data < deleteKey){
        root->rChild = deleteNode(root->rChild, deleteKey);
    }

    else if(root->data > deleteKey){
        root->lChild = deleteNode(root->lChild, deleteKey);
    }
    else{///Delete key found

        ///case 1: No child
        if(root->lChild == NULL && root->rChild == NULL){
            delete root;
            //root == NULL;
        }
        ///case 2: One child
        if(root->lChild == NULL){
//            Node* temp = root;
//            root = root->rChild;
//            delete temp;
//            return root;

              Node* temp = root->rChild;
              delete root;
              return temp;
        }
        else if(root->rChild == NULL){
              Node* temp = root->lChild;
              delete root;
              return temp;

//            Node* temp = root;
//            root = root->lChild;
//            delete temp;
//            return root;
        }
        ///case 3: 2 children
        else{
            Node* temp = minValue(root->rChild); ///Inorder successors
            root->data = temp->data;
            root->rChild = deleteNode(root->rChild, temp->data);
            return root;
        }
    }
    return root;
}

void printNode(Node* root){
    if(root == NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        printNode(root->lChild);
        printNode(root->rChild);
    }
}

int main(){
    int skey;
    Node* root = NULL;

    root = insertNode(root, 3);
    root = insertNode(root, 2);
    root = insertNode(root, 7);
    root = insertNode(root, 4);
    root = insertNode(root, 9);

    printNode(root);

//    cout<<"\nInsert data to search: "<<endl;
//    cin>>skey;
//
//    if(searchNode(root, skey)== NULL){
//        cout<<"Value not exist.";
//    }
//    else{
//        cout<<"Value exist.";
//    }

    cout<<endl;
    root = deleteNode(root, 7);
    printNode(root);

return 0;
}
