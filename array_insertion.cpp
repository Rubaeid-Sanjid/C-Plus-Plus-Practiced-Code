#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 3, 5, 2, 4};
    int i, a, x, n;

    for(i=0; i<5; i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<"\nEnter the size of your array: ";
    cin>>n;
    cout<<"\nEnter the position you want to insert: ";
    cin>>a;
    cout<<"\nEnter the number you want to enter: ";
    cin>>x;

    for(i=n; i>a; i--){     //looped till 'a' position
        arr[i] = arr[i-1];    //index shifting condition
        }
    arr[a]=x;         //'a' position value inserted

    for(i=0; i<n; i++){
        cout<<arr[i];
        cout<<" ";
    }
}
