#include <iostream>
using namespace std;

int main(){
       int arr[4] = {2, 17, 7,15};

    for(int i =0; i<4; i++){
        if(arr[i]+arr[i+1]==9){
            cout<<i<<" "<<i+1;
        }

    }
}


