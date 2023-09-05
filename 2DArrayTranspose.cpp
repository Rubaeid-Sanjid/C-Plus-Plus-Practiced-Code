#include <iostream>
using namespace std;

int main(){
    int arr[5][4] = {{12, 5, 8, 10},
                    {6, 7, 4, 11},
                    {18, 9, 2, 1},
                    {20, 3, 15, 13},
                    {30, 21, 35, 23}
                };
    int arr2[4][5];

    for(int i =0; i<5; i++){
        for(int j =0; j<4; j++){
            arr2[j][i] = arr[i][j];
        }
    }
    cout<<"\n";

    for(int j =0; j<4; j++){
        for(int i =0; i<5; i++){
            cout<<arr2[j][i];
            cout<<" ";
        }
    }
    cout<<"\n";
}


