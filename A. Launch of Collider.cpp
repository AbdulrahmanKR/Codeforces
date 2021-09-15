#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int minDistance=INT_MAX;
    bool found=false;
    for(int i=0;i<n-1;i++){
        if (s[i] == 'R' && s[i+1]=='L'){
            found=true;
            minDistance=min(minDistance,ar[i+1]-ar[i]);
        }
    }
    if (found)
        cout<<minDistance/2<<endl;
    else
        cout<<-1<<endl;


}
 int main(){
    //int T; cin>>T;
   // while(T--)
        solve();

 }
