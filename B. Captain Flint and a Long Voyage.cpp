#include <iostream>
#include <cmath>
using namespace std;
 
void solve(){
/*
  9: 1001 ->
  8: 1000 ->
 
  99 -> 1001 1001
  98 -> 1001 1000
 
  999 -> 1001 1001 1001
  998 -> 1001 1001 1000
 
  9999 -> 1001 1001 1001 1001
  9998 -> 1001 1001 1001 1000
 
  99999 : 1001 1001 1001 1001 1001
  99998 : 1001 1001 1001 1001 1000
 
  99988 : 1001 1001 1001 1000 1000
*/
    int n; cin>>n;
    int eights = ceil((double)n/4);
    //cout<<eights<<endl;
 
    for(int i=0;i<n-eights;i++)
      cout<<9;
 
    for(int i=0;i<eights-1;i++)
      cout<<8;
 
    cout<<8<<endl;
}
 
 
int main(){
  int T; cin >>T;
  while(T--)
    solve();
}
