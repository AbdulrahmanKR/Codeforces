#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    double totalSum=0,leftSideSum=0,rightSideSum=0,maxAvg=INT_MIN;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        totalSum+=ar[i];
    }
    sort(ar,ar+n);
    int p1=n-2,p2=n-1;
    while(p1>=0){
        rightSideSum+= ar[p2];
        leftSideSum = totalSum - rightSideSum;
        double leftSideAvg = leftSideSum/double(p2);
        double rightSideAvg = rightSideSum/(double)(n-p2);
        maxAvg = max(leftSideAvg+rightSideAvg,maxAvg);
        p1--;
        p2--;
    }
    cout<<fixed <<setprecision(9)<<maxAvg<<endl;
}

int main(){
  int T; cin >>T;
  while(T--)
    solve();
}
