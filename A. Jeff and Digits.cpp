#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;


void solve(){
    int n; cin >>n;
    int ar[n];
    int five=0,zero=0;
    for(int i=0;i<n;i++){
     cin>>ar[i];
     if(ar[i]==5)
        five++;
     else
        zero++;
    }

  if(zero ==0){
    cout<<-1<<endl;
  }else if(five == 0 || five<9){
    cout<<0<<endl;
  }
  else{
    if(five % 9 ==0){
          sort(ar,ar+n);
          for(int i=0;i<n;i++)
            cout<<ar[n-i-1];
        }else{
          for(int i=0;i<(five/9)*9;i++)
            cout<<5;
          for(int i=0;i<zero;i++)
            cout<<0;
        }
  }

}

int main() {
 // int T; cin>>T;
   // while (T--)
    solve();
 }
