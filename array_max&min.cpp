#include <iostream>
using namespace std;

int main(){

    int arr[5]={2, 5, 6, 1, 3};
    int large = arr[0];
    int small = arr[0];

    for(int i = 1; i<5; i++){

        if(arr[i]>large){
            large = arr[i];
        }
        if(arr[i]<small){
            small= arr[i];
        }
    }
    cout<<"Largest number is: "<<large<<endl;
    cout<<"\nSmallest number is: "<<small<<endl;
}
