#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    double cgpa;
    char gender;
    int creditCompleted;
    string department;

    bool checkProbation( ){
        if(cgpa<2.5){
            cout<<"You are in probation.";
        }
    }
};


int main(){
    string arr[5] = {"Sheikh","Rubaeid", "Sanjid", "Piyal", "ShellHead"};
    Student s;

    for(int i=0; i<5; i++){
        s.name = arr[i];
    }

    cout<<"Enter your ID: ";
    cin>>s.id;
    cout<<"Enter your Cgpa: ";
    cin>>s.cgpa;
    cout<<"Enter your gender: ";
    cin>>s.gender;
    cout<<"Enter your Completed credit: ";
    cin>>s.creditCompleted;
    cout<<"Enter the name of your department: ";
    cin>>s.department;

    s.checkProbation( );

}
