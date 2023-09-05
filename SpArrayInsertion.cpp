#include <iostream>
using namespace std;

void insertArray(int array1[], int size1, int pos, int inputNum){

    int i;

    for(i=0; i<pos; i++){
        array1[i+1] = array1[i];
        array1[pos] = inputNum;

    }
    for(i =0; i<size1; i++){
        cout<<array1[i]<<" ";
    }

}

int main(){
    int arr[] = {1, 3, 6, 3, 7};

    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int index;
    cout<<"Enter the position you want to enter the number: ";
    cin>>index;

    int num;
    cout<<"Enter your number: ";
    cin>>num;

    insertArray(arr, arrSize, index, num);
}

