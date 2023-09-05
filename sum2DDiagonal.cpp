#include <iostream>
using namespace std;

int main(){
    int arr[4][4] = {{12, 5, 8, 10},
                {6, 7, 4, 11},
                {18, 9, 2, 1},
                {20, 3, 15, 13},
                };
    int sum = 0;

    for(int i =0; i<4; i++){
        for(int j =0; j<4; j++){
            if(i==j || i+j==(4-1)){
                sum += arr[i][j];
            }
        }
    }

    cout<<"Summation of the diagonal elements of 2D array: "<<sum<<endl;
}

