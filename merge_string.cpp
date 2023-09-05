#include <iostream>
using namespace std;

int main(){
    string sentence1;
    string sentence2;

    cout<<"Enter the first sentence to: ";
    getline(cin, sentence1);
    cout<<"Enter the second sentence to: ";
    getline(cin, sentence2);


    cout<<"Merged sentence is: "<<sentence1 +" "<<sentence2<<endl;

    return 0;
}

