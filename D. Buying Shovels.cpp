#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;



void solve(){
    int n,k; cin>>n>>k;

    if (k>=n){
        cout<<1<<endl;
    }else{
        int res = n;

        for(int i=1;i<=sqrt(n);i++){
            if (n % i == 0){
                if (i <=k){
                    res = min(res,n/i);
                }

                if (n/i <= k){
                
                    res = min(res,(n / (n/i)));
                }
            }
        }
        cout<<res<<endl;
    }
}


int main(){
    int T; cin>>T;
    while(T--)
        solve();
    return 0;
}
