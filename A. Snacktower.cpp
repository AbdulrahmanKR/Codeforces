#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    int ar[n];
    bool visited[n+1]={false};
    int maxNumber=n;

    for(int i=1;i<=n;i++)
        cin>>ar[i];

    for(int i=1;i<=n;i++){
        visited[ar[i]]=true;

        if (ar[i] == maxNumber){
            while(visited[maxNumber]){
                cout<<maxNumber<<" ";
                maxNumber--;
            }cout<<endl;
        }else{
            cout<<endl;
        }

    }
}

 int main(){
   // int T; cin>>T;
    // while(T--)
        solve();
 }
