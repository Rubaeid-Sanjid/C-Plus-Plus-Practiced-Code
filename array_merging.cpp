#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {40, 30, 70, 90, 100};
    int arr2[7] = {10, 15, 45, 20, 65, 6, 1};
    int j =0;
    int m_arr[5+7];

    for(int i=0; i<5; i++){
        m_arr[i]=arr1[i];
    }
    for(int i=5; i<12; i++){
        m_arr[i]= arr2[j];
        j++;
    }

    for(int i=0; i<12; i++){
        cout<<m_arr[i];
        cout<<" ";
    }
}
