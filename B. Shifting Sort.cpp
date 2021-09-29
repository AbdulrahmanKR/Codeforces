#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <string.h>
#include <iostream>
using namespace std;

void suffleArray(int l,int r,int ar[],int shiftBy){
    int total = (r-l)+1;
    int temp[total];
    int current=0;
    for(int i=l;i<r+1;i++){
        temp[current++]=ar[i];
    }

    int newArray[total];

    for(int i=0;i<total;i++){
        int cIndex = (i-shiftBy);
        cIndex = total- cIndex;
        int newlocation = (i+(total - shiftBy))% total;
        newArray[newlocation]= temp[i];
    }

    current=0;
    for(int i=l;i<r+1;i++){
        ar[i]=newArray[current++];
    }
}
void solve(){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    //
    int res[n][3];
    int resIndex=0;

    //
    int Index=0;
    while(Index < n){
        int minValue=INT_MAX;
        int minIndexValue=-1;
        for(int i=Index;i<n;i++){
            if (ar[i] < minValue){
                minValue=ar[i];
                minIndexValue=i;
            }
        }
        if (minIndexValue > Index){
            suffleArray(Index,minIndexValue,ar,(minIndexValue - Index));
            res[resIndex][0]=Index+1;
            res[resIndex][1]=minIndexValue+1;
            res[resIndex][2]=(minIndexValue-Index);
            resIndex++;
        }
        Index++;
    }

    cout<<resIndex<<endl;

    for(int i=0;i<resIndex;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }
}
int main() {
  int T; cin>>T;
    while (T--)
     solve();
 }
