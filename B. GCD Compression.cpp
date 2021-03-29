#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;

void solve(){
 int n; cin >>n;
 int ar[2*n];
 vector<int> res;
 for(int i=0;i<2*n;i++){
    cin >>ar[i];
 }

 // Push Evens
 for(int i=0;i<2*n;i++){
    if(ar[i] % 2 ==0)
        res.push_back(i+1);
 }

 if(res.size() % 2 !=0)
    res.pop_back();

 // Push Odds
 for(int i=0;i<2*n;i++){
    if(ar[i]&1)
        res.push_back(i+1);
 }
 if(res.size() % 2 !=0)
    res.pop_back();
 int c=0;
 n-=1;
 for(auto i : res){
    if(n == 0){
        break;

    }
    cout<<i<<" ";
    c++;
    if(c % 2 ==0){
       cout<<endl;
          n--;
    }
 }
}

int main() {
 int T; cin>>T;
   while (T--)
    solve();
 }
