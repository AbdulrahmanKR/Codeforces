#include <bits/stdc++.h>
using namespace std;

void solve(){
 long long x,y,k; cin >>x>>y>>k;
 long long sticks=1,coils=0,exchange =0;
 sticks +=ceil(((double)(k-1))/(double)(x-1))* (x-1);
 exchange+=ceil(((double)(k-1))/(double)(x-1));
 sticks-=k;
 exchange+= ceil((double)((k*y)-sticks)/(double)(x-1));
 cout<<exchange + k <<endl;
}

int main() {
 int T; cin>>T;
  while (T--)
    solve();
 }
