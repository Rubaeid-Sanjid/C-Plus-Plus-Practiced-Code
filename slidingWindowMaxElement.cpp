#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    deque <int> dq;

    vector <int> ans;

    for(int i=0; i<k; i++){
        while(!dq.empty() && a[i]>a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(a[dq.front()]);

    for(int i = k; i<n; i++){
        if(dq.front()== i-k){
            dq.pop_front();
        }
        while(!dq.empty() && a[i]>a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(a[dq.front()]);
    }

    for(int i=0; i<n-1; i++){
        cout<<ans[i]<<" ";
    }
}
