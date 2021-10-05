#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <string.h>
#include <iostream>
using namespace std;

int binarySearch(long long arr[], int x, long long l, long long r){
    if (r >= l) {
       long long mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, x,l, mid - 1);

        return binarySearch(arr, x,mid + 1, r);
    }
    return l;
}

void solve(){
    int n,m; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cin>>m;
    int juicy[m];
    for(int i=0;i<m;i++)
        cin>>juicy[i];

    long long t = n*2;
    long long res[t];

    res[0]=1;
    res[1] = ar[0];
    long long comulative=ar[0]+1;
    long long trackIndex=2;
    for(int i=1;i<n;i++){
        res[trackIndex++] = comulative;
        comulative= comulative + ar[i] -1;
        res[trackIndex++] = comulative;
        comulative++;
    }

    for(int i=0;i<m;i++){
        cout<<binarySearch(res,juicy[i],0,n*2 -1)/2 +1<<endl;
    }

}

int main() {
   //int T; cin>>T;
   //while(T--)
    solve();
}
