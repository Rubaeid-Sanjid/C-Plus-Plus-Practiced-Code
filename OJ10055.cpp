#include <iostream>
using namespace std;

int main(){
     long long a, b,ans;

     cin>>a;
     cin>>b;
    while(true){
        ans = a-b;
        if(ans<0)
             ans= ans*(-1);
        cout<<"Answer: "<<ans;
        break;
    }
     return 0;

}
