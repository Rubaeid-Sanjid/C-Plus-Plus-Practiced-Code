#include <iostream>
using namespace std;

int main(){
    string sentence;
    int count = 0;

    cout<<"Enter the first sentence to: ";
    getline(cin, sentence);

    for(int i = 0; i<sentence.size(); i++){
         count += 1;
    }
    cout<<"\nLength of string is: "<<count<<endl;
    return 0;
}



