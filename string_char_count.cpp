#include <iostream>
using namespace std;

int main(){
    string sentence;
    int count = 0;
    char letter;

    cout<<"Enter the sentence: ";
    getline(cin, sentence);
    cout<<"Enter the character to search: ";
    cin>>letter;

    for(int i = 0; i<sentence.size(); i++){
        if(sentence[i] == letter){
         count += 1;
        }
    }
    cout<<"Character "<<letter<<" appeared: "<<count<<endl;
}

