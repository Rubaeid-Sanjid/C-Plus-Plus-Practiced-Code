#include<bits/stdc++.h>
using namespace std;

int main()
{
    //array deletion
    int A[20], Asize, pos;
    cout<<"Enter your size of the array: ";
    cin>>Asize;

    cout<<"Enter the elements of your array: ";
    for(int i =0; i<Asize; i++)
    {
        cin>>A[i];
    }

    cout<<"Enter the position you want to delete the number: ";
    cin>>pos;

    for(int i =pos-1; i<Asize; i++)
    {
        A[i] = A[i+1];
    }
    for(int i =0; i<Asize-1; i++)
    {
        cout<<A[i]<<" ";
    }
}
