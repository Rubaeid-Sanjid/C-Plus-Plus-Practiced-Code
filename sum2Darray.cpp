#include<iostream>
using namespace std;

int main(){
    int arr [3][3]= {
        {12, 5, 8},
        {6, 7, 4},
        {18, 9, 2},
};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j];
            cout<<" ";
        }
    }
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }
    cout<<"\n\nSum of 2D array is: "<< sum<<endl;
}
