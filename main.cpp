#include <iostream>
#include <math.h>

using namespace std;

long long gcd(long long a, long long b){

  long long remainder=0;

  while(b!=0){
  remainder=a%b;
  a=b;
  b=remainder;
  }
  return a;
}

void solve(){

   long long a,b,x,y;
   cin>>a>>b>>x>>y;

   cout<<min(a / (x/gcd(x,y)),b / (y/gcd(x,y)));

 }

int main() {
  //int T; cin>>T;

  // while (T--)
      solve();

 }
