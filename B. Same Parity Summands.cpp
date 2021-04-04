#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

void solve(){
 long long n,k; cin>>n>>k;

 if(n % k ==0 && n>=k){
  cout<<"yes"<<endl;
  for(int i=0;i<k;i++)
    cout<<(n/k)<<" ";
  cout<<endl;
 }else{
  long long rem = n % k;
  long long d =n/k;

  if((rem+d) % 2 == d % 2 && d>0){
    cout<<"yes"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<d<<" ";
    }
    cout<<d+rem<<endl;
  }else{
    rem+=k;
    d--;
  if(d==0){
    cout<<"no"<<endl;
  }
  else if((rem+d) % 2 == d % 2){
    cout<<"yes"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<d<<" ";
    }
    cout<<d+rem<<endl;
  }else{
   cout<<"no"<<endl;
  }
  }
 }
}

int main() {
  int T; cin>>T;
  while (T--)
     solve();
 }
