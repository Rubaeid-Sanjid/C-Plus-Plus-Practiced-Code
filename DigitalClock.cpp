#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void clock(int h, int m, int s)
{
    string status;
    while(true)
    {
        system("cls");
        cout<<endl;
        cout<<"\t******************"<<endl;
        cout<<"\t| "<<h<<" : "<<m<<" : "<<s<<" "<<status<<"|"<<endl;
        cout<<"\t******************";
        s++;
        sleep(1);
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h<12)
        {
            status = "AM";
        }
        else{
            status = "PM";
        }
    }
}

int main(){

    int hr, mnt, sec;

    m:
    cout<<"Enter Hours : ";
    cin>>hr;
    cout<<"Enter Minutes : ";
    cin>>mnt;
    cout<<"Enter Seconds : ";
    cin>>sec;

    if(hr<12 && mnt<60 && sec<60){
        clock(hr, mnt, sec);
    }
    else{
        cout<<"Please enter time in correct way \"HH:MM:SS\" "<<endl;
        goto m;
    }
}
