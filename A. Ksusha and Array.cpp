#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <string.h>
#include <iostream>
using namespace std;

void solve(){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
     bool isDivByAll=true;
     sort(ar,ar+n);
    for(int i=1;i<n;i++){
        if (ar[i] % ar[0] !=0){
            isDivByAll=false;
            break;
        }
    }
    cout<<(isDivByAll?ar[0]:-1);

}

int main() {
  // int T; cin>>T;
  // while(T--)
    solve();
}
