#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

void solve(){
  long long n; cin >>n;
  long long p1=1;
  long long p2=cbrt(n);
  bool can=0;
  
  // 2 pointers 
  while(p1<=p2){
   long long v1 = pow(p1,3);
   long long v2= pow(p2,3);
   if (v1 + v2 == n){
       can=1;
       break;
   }else if (v1+v2<n){
     p1++;
   }else{
     p2--;
   }
  }
  if (can)
      cout<<"Yes"<<endl;
  else
      cout<<"No"<<endl;
  }

int main() {
 int T; cin>>T;
  while (T--)
    solve();
 }
