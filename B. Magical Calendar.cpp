#include <bits/stdc++.h>
using namespace std;
void solve(){
 long long n,k; cin>>n>>k;

 long long diff=0,res=0;
 if (n <= k ){
    k = n-1;
    res = (k*(k+1))/2;
    res+=1;
 }else {
    res = (k*(k+1))/2;
 }
 cout<<fixed<<setprecision(0)<<res<<endl;

 }

int main() {
  int T; cin>>T;
  while (T--)
     solve();
 }
