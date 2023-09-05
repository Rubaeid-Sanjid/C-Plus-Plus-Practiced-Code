#include <iostream>
using namespace std;

int main(){
    int arr[10] ={10, 15, 45, 10, 45, 6, 1, 100, 45, 99};
    int item;
    int count = 0;

    cout<<"\nEnter the number that you want to count: ";
    cin>>item;

    for(int i=0; i<10; i++){
        if(arr[i]==item){
            count += 1;
        }
    }
    cout<<"\n"<<item<<" Repeats total "<<count<<" time in the array."<<endl;
}
