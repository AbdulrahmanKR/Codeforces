#include <bits/stdc++.h>
using namespace std;

bool isKGood(int number,int k){
    bool exists[10]={false};
    while(number > 0){
        int d = number % 10;
        exists[d]=true;
        number/=10;
    }
    for(int i=0;i<=k;i++){
        if (!exists[i])
            return false;
    }
    return true;
}
void solve(){
    int n,k; cin>>n>>k;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int kGoodCounter=0;
    for(int i=0;i<n;i++){
        if (isKGood(numbers[i],k))
            kGoodCounter++;
    }
    cout<<kGoodCounter<<endl;
}
 int main(){
    //int T; cin>>T;
    //while(T--)
        solve();

 }
