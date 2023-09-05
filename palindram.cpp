#include <bits/stdc++.h>
using namespace std;

bool palindram(string s, int low, int high){
    if(low >= high){
        return true;
    }
    if(s[low] != s[high]){
        return false;
    }
    return palindram(s, low+1, high-1);
}

int main(){
    string s;
    cout<<"Enter your word to check: ";
    cin>>s;

    if(palindram(s, 0, s.length()-1)){
        cout<<"Your word is Palindram.";
    }
    else{
        cout<<"Not a palindram.";
    }

}
