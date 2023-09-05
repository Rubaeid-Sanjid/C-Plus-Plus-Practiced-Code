#include<bits/stdc++.h>
using namespace std;

vector<int> prime;

void sieve(int n){
    int status[n];
    memset(status,0,sizeof(status));

    for(int i=2; i<=n; i++){
        if(status[i] == 0){
            prime.push_back(i);
            for(int j = i*i; j<=n; j+=i){
                status[j] = 1;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;
    sieve(n);
    for(auto x : prime){
        cout<<x<<" ";
    }
    return 0;
}
