#include <bits/stdc++.h>
using namespace std;

int main(){
//    int size, data, pos, data2;
//    cout<< "Enter size of your array: ";
//    cin>>size;
//    int *arr = new int [size];
//
//    for(int i = 0; i<size; i++){
//        cin>>arr[i];
//    }
//
//    sort(arr, arr+size);
//
//    for(int i = 0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//DATA INSERTION
//    cout<<"\nEnter data to insert in array: ";
//    cin>>data;
//    cout<<"Enter the position: ";
//    cin>> pos;
//    size++;
//
//    for(int i =size; i>pos-1; i--){
//        arr[i]= arr[i-1];
//    }
//    arr[pos-1] = data;
//
//    for(int i = 0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }

//DATA DELETION
//    cout<<"\nEnter data to delete from array: ";
//    cin>>data2;
//    for(int i = 0; i<size; i++){
//        if(arr[i]==data2){
//             for(int j =i; j<size; j++){
//                arr[j]= arr[j+1];
//            }
//        }
//    }
//    size--;
//    for(int i = 0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }

    list <int> list1;
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(6);

//    list1.sort();
//    list1.reverse();
    list1.pop_front();

    list<int> :: iterator it;
    advance(it, 2);
    list1.insert(it, 3, 4);
    for(it =list1.begin(); it != list1.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
