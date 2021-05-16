#include <bits/stdc++.h>
using namespace std;

void solve(){
 long long c,m,x;
 cin >>c>>m>>x;
 if (c < m)
    swap(c,m);
 long long res=0;

 if (m *2 <= c){
    res=m;
 }else{
   if (x+c >= m*2){
     res=m;
   }else{
     res = (x+c+m)/3;
   }
 }
 cout<<res<<endl;

}
int main() {
  int T; cin>>T;
  while (T--)
     solve();
 }
