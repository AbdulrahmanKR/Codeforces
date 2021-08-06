#include <iostream>
using namespace std;

void solve(){
    long long a,b,c; cin >>a>>b>>c;
    long long one=-1, two=-1;
    if (a >= c){
       one=-1;
       two=b;
    }else{
        one=1;
        if (a*b > c)
          two=b;
    }
    cout<<one<< " "<<two<<endl;
}


int main(){
/*
  First shop : 1 donut costs -> a dollars
  Second Shop : box of b donuts costs c dollars
*/

  int T; cin >>T;
  while(T--)
    solve();
}
