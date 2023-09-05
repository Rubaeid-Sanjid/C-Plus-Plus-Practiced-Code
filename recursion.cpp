#include <bits/stdc++.h>
using namespace std;

//void reverseStr(string s){
//    if(s.length() == 0){
//        return;
//    }
//
//    string res = s.substr(1);
//
//    reverseStr(res);
//
//    cout<<s[0];
//
//}

void reverseStr(string &s, int low, int high){
    if(low < high){
        swap(s[low], s[high]);
        reverseStr(s, low+1, high-1);
    }
}

int main(){

    string s = "Okay";
    reverseStr(s, 0, s.length()-1);
    cout<<s;

    return 0;
}
