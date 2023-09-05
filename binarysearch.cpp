#include <iostream>
using namespace std;

int binarySearch(int array1[], int first, int last, int searchNum ){
    while(first==last){
        int middle = (first+last)/2;
        if(array1[middle]==searchNum){
            return middle;
        }
        else if(array1[middle]>searchNum){
            last = middle - 1;
            return binarySearch(array1, first, last, searchNum );
        }
        else if(array1[middle]<searchNum){
            first = middle + 1;
            return binarySearch(array1, first, last, searchNum );
        }
    }

}
int main(){

    int arr[] = {1, 3, 5, 7, 9, 15, 18, 22};

    int arrSize = sizeof(arr)/sizeof(arr[0]);
    //cout<< arrSize;
    int first =0;
    int last= arrSize-1;
    int searchNum;
    cout<<"Enter a number to search: ";
    cin>>searchNum;


    cout<<"Your number is: "<<binarySearch(arr, first, last, searchNum );
}

