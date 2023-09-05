#include <iostream>
using namespace std;

int main(){

    int arr[6]={2, 5, 6, 1, 3, 4};

//summation of array
    int sum =0;
    for(int i = 0; i<6; i++){
            sum += arr[i];
    }
    cout<<"Summation is: "<<sum<<endl;

//Summation of even number
    int sum2 = 0;
    for(int i = 0; i<6; i++){
        if(arr[i]%2 == 0){
            sum2 += arr[i];
        }
    }
    cout<<"Summation of even number is: "<<sum2<<endl;

//Summation of even indexes
    int sum3 = 0;
    for(int i = 0; i<6; i++){
        if(i%2 == 0){
            sum3 += i;
        }
    }
    cout<<"Summation of even indexes is: "<<sum3<<endl;
}

