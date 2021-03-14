
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;


void solve(){
  int n; cin >>n;
  int ar[n];
  for(int i=0;i<n;i++)
    cin>>ar[i];
  long long total=0,dollars=0;
   dollars+=ar[0];

  for(int i=0;i<n-1;i++){
    if (total + (ar[i]-ar[i+1])<=0){
        dollars+=abs(total + (ar[i]-ar[i+1]));
        total=0;
    }else{
      total+=(ar[i]-ar[i+1]);
    }
  }
  cout<<dollars<<endl;

 }

int main() {
 //int T; cin>>T;

 // while (T--)
    solve();

 }
