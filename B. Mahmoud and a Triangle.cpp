#include <bits/stdc++.h>
using namespace std;
 
bool isNonDegenerate(int A, int B, int C){
  if ((A+B>C) && (A+C>B) && (B+C>A))
     return true;
 
  return false;
}
 
 
void solve(){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
 
    sort(ar,ar+n);
    bool found=0;
    for(int i=2;i<n;i++){
        if (isNonDegenerate(ar[i],ar[i-1],ar[i-2])){
            found =1;
            break;
        }
    }
    cout<<(found?"YES":"NO")<<endl;
}
 
int main(){
  //int T; cin >>T;
  //while(T--)
    solve();
}
