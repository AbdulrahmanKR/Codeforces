#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <string.h>
#include <iostream>
using namespace std;

void solve(){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    deque<int> result;
    int first=ar[0];
    result.push_back(ar[0]);
    for(int i=1;i<n;i++){
        if (ar[i] < first){
            result.push_front(ar[i]);
            first=ar[i];
        }else{
            result.push_back(ar[i]);
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }cout<<endl;
}

int main() {
  int T; cin>>T;
    while (T--)
     solve();
 }
