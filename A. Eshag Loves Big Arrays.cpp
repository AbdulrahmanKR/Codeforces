
/* https://codeforces.com/contest/1529/problem/A */

#include <iostream>
#include <algorithm>
 
 
using namespace std;
 
void solve()
{
   int n; cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
     cin>>ar[i];
     
   sort(ar,ar+n);
   
   int counter=0;
   
   for(int i=1;i<n;i++)
      if(ar[i]>ar[0])
       ++counter;
    cout<<counter<<endl;
}
 
int main(){
    int T; cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
