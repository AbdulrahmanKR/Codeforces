#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x; cin>>x;
  int a=1,b=1,c=x*2;  //Quadratic Formula
  int sqr=1+(4*c);
  int one = ceil(-b + sqrt(sqr));
  int two = ceil(b - sqrt(sqr));
  int n = max(one,two);
  int res = ceil((double)n/(double)2);
  if ((res * (res+1))/2 == x+1)
      cout<<res+1<<endl;
  else
    cout<<res<<endl;
  }

int main() {
  int T; cin>>T;
  while (T--)
     solve();
 }
