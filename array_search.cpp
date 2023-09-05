#include <iostream>
using namespace std;

int main(){
    int array1[12] = {1, 4, 5, 2, 6, 10, 9, 12, 11, 7, 8, 3};
    int i;


    for(int i = 0; i<12; i++){
        cout<<array1[i];
        cout<<" ";
    }

    int n;
    cout <<"\nEnter 1 to 12 to search it's position: ";
    cin>>n;
    for(i=0; i<12; i++){
        if(n== array1[i]){
            break;
        }
    }
    cout<<n<<" is at position "<<i+1<<endl;
}

