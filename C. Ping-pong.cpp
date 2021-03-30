#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

void solve(){
 int x,y; cin >>x>>y;
  if(x==y && x==1){
    cout<<0<<" "<<y<<endl;
  }else if(x==y && x>1){
    cout<< x-1<<" "<<y<<endl;
  }else{
    cout<<x-1<< " "<<y<<endl;
  }
}
int main() {
 int T; cin>>T;
   while (T--)
    solve();
 }
