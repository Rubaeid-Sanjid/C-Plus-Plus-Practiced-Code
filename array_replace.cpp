#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 3, 5, 2, 4};
    int i, a, x, n;
    n=5;

    for(i=0; i<n; i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<"\nEnter the position you want to insert: ";
    cin>>a;
    cout<<"\nEnter the number you want to enter: ";
    cin>>x;

    for(i=0; i<a; i++){
        arr[i+1] = arr[i];
    }
    arr[i]=x;

    for(i=0; i<n; i++){
        cout<<arr[i];
        cout<<" ";
    }

}

