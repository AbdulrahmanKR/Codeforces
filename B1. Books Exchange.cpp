#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n; cin >>n;
 int ar[n];
 for(int i=1;i<=n;i++)
    cin>>ar[i];
  vector <int> v;
 for(int i=1;i<=n;i++){
     int index=i;
     int counter=1;
    while((ar[index]) !=i){
      index=ar[index];
      ++counter;
    }
    v.push_back(counter);
   }
      for(int i:v){
        cout<<i<< " ";
      }
    cout<<endl;

   }

int main() {
 int T; cin>>T;
  while (T--)
    solve();
 }
