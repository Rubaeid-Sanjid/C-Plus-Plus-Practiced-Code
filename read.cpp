#include <bits/stdc++.h>
using namespace std;

int main(){
   fstream  myFile;
//   myFile.open("piyal.txt", ios::out);///write mode
//   if(myFile.is_open()){
//    myFile << "Hello guys\n";
//    myFile.close();
//   }
//
//    myFile.open("piyal.txt", ios::app);///append mode
//    if(myFile.is_open()){
//        myFile << "What's up ?\n";
//        myFile.close();
//   }

   myFile.open("piyal.txt", ios::in);///read mode
    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            cout<< line <<endl;
        }
        myFile.close();
   }
}

