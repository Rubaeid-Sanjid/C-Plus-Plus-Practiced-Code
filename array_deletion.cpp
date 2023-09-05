#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,4,1,5,3};
    int i, aSize;
    aSize=5;
    for(i=0; i<aSize; i++){
        cout<<arr[i];
        cout<<" ";
    }

    int num;
    cout<<"\nEnter the number you want to delete: ";
    cin>>num;
    for(i=0; i<aSize; i++){
        if(num==arr[i]){
           for(int j=i; j<aSize-1; j++){
            arr[j]=arr[j+1];
            }
        }
    }

    for(i=0; i<aSize-1; i++){
        cout<<arr[i];
        cout<<" ";
    }
}
