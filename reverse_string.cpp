#include <iostream>
using namespace std;

int main(){
    string sentence;
    string r_sentence;

    cout<<"Enter the sentence to reverse: ";
    getline(cin, sentence);

    for(int i = sentence.size()-1; i>=0; i--){
        r_sentence += sentence[i];
    }
    cout<<"Reversed sentenced is: "<<r_sentence<<endl;
}
