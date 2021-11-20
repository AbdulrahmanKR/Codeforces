#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <string.h>
#include <iostream>
using namespace std;


void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string sorted ="";

    for(int i=0;i<n;i++){
        if (s[i] == '0')
            sorted+='0';
    }

    for(int i=0;i<n;i++){
        if (s[i] == '1')
            sorted+='1';
    }

    vector<int> result;

    for(int i=0;i<n;i++){
        if (s[i] !=sorted[i])
            result.push_back(i+1);
    }

    if (result.size()){
        cout<<1<<endl;
        cout<<result.size()<<" ";
        for(auto i:result){
            cout<<i<<" ";
        }
        cout<<endl;
    }else{
        cout<<0<<endl;
    }
}

int main() {
  int T; cin>>T;
  while(T--)
    solve();
}
