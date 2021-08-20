#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c; cin>>a>>b>>c;
    int total = abs(a-b)*2;
    if (a > total || b > total || c > total){
        cout<<-1<<endl;
        }
    else{
        int res = (c + abs(a-b))%total;
        if (res == 0)
            cout<<total<<endl;
        else
            cout<<res<<endl;
    }
}

 int main(){
    int T; cin>>T;
    while(T--)
        solve();
 }
