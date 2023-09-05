#include <iostream>
using namespace std;

int main(){
    int array2d[3][4] = {
        {1,2,4,5},
        {3,5,6,7},
        {1,3,5,8}
    };
    for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<< array2d[i][j]<<endl;
        }
    }
}
