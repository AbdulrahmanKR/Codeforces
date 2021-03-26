#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

void solve(){
 long long x,y,s; cin>>x>>y>>s;

 if (x<0)
    x*=-1;
 if (y<0)
    y*=-1;

  if (x+y > s){
    cout<<"No"<<endl;
  }else{
    s-=(x+y);
    if (s % 2 ==0){
        cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }

}

int main() {
 //int T; cin>>T;
   //while (T--)
    solve();
 }
