#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n,m,a,b; cin>>n>>m>>a>>b;
 int res=INT_MAX;
 for(int i=0,j=n; i<=n;i++,j--){
    int case1 = i * a;
    int case2 = ceil((double)j/(double)m)*b;
    res = min(res,case1+case2);
 }
 cout<<res<<endl;
}
int main() {
 // int T; cin>>T;
 // while (T--)
     solve();
 }
