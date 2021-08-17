#include <bits/stdc++.h>
using namespace std;


long long getTeamsNum(long long teams){
    --teams;
    return (teams*(teams+1))/2;
}

void solve(){
    long long n,m; cin>>n>>m;
    if (m==1){
        cout<<getTeamsNum(n) <<" "<<getTeamsNum(n)<<endl;
    }else{
        long long maxTeam = getTeamsNum(n - (m-1));
        long long minTeam = (getTeamsNum(n/m) * (m - (n%m))) + (getTeamsNum((n/m) + (n&&m)) * (n%m));
        cout<<minTeam <<" "<<maxTeam<<endl;
    }
}

 int main(){
    solve();
 }
