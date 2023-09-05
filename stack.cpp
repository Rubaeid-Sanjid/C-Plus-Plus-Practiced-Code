#include <bits/stdc++.h>
using namespace std;

class MyStack{
int *stack, top=0, maxSize=0;
public:
//Initializing stack
MyStack(int Size){
    maxSize = Size;
    stack = new int [maxSize];
    }
bool isEmpty(){
    return (top==0);
}
bool isFull(){
    return (top==maxSize);
}
void push(int element){
    if(isFull()){
        cout<<"Stack is Full."<<endl;
    }
    else{
        stack[top] = element;
        top++;
    }
}
int pop(){
    if(isEmpty()){
        cout<<"Stack is empty."<<endl;
    }
    else{
        return top--;
    }
}
int topElement(){
    return stack[top-1];
}
void show(){
    for(int i=0; i<maxSize; i++){
        cout<<stack[i]<<" ";
    }
}
};

int main(){
    MyStack mStack(4);

    mStack.push(12);
    mStack.push(6);
    mStack.push(9);
    mStack.push(7);
    cout<<mStack.topElement()<<endl;
    mStack.pop();
    cout<<mStack.topElement()<<endl;
    mStack.push(20);
    cout<<mStack.topElement()<<endl;
    mStack.show();

}
