#include <iostream>
#include <string>
#include <algorithm>
#include<iostream>
#include <math.h>
#include <iomanip>
#include <vector>
#include <iostream>

using namespace std;

void printArray(long long ar[],int n){
  for(int i=0; i < n;i++)
    cout<<ar[i]<<" ";
  cout<<endl;
}

void solve(){
  int n; cin >>n;
  long long ar[n];

  for(int i=0;i<n;i++){
     cin>>ar[i];
     if (ar[i]<0)
        ar[i]*=-1;
  }

   for(int i=0;i<n-1;i++){
    if (i%2==0){
        if(ar[i+1]-ar[i]>0){
            ar[i+1]*=-1;
        }
    }else{

      if (ar[i+1]-ar[i]<0){
           ar[i]*=-1;
      }
    }
   }
   printArray(ar,n);
  }

int main() {
 int T; cin>>T;

  while (T--)
    solve();

 }
