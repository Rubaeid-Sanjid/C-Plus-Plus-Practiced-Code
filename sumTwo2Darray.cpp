#include<iostream>
using namespace std;

int main(){
    int arr1[3][3]= {
        {12, 5, 8},
        {6, 7, 4},
        {18, 9, 2},
};

    int arr2[3][3]= {
        {2, 8, 18},
        {16, 14, 5},
        {8, 19, 12},
};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr1[i][j];
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr2[i][j];
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"\n";

    int arr3[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr3[i][j];
            cout<<" ";
        }
    }
    cout<<"\n";
    cout<<"\n";

}
