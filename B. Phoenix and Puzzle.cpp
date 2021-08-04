#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool check (long long n){

  if((ceil(sqrt((double)n/2)) == floor((double)sqrt(n/2))) || (ceil(sqrt((double)n/4)) == floor(sqrt((double)n/4))))
    return true;
  return false;

}


void solve() {
long long n; cin>>n;

if(check(n))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

 }

int main(){
  int T; cin >>T;
  while(T--)
    solve();
}
