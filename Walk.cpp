#include<iostream>
using namespace std;

void solve(){
   long long left,right,down,up,x,y,x1,y1,x2,y2;
   cin>>left>>right>>down>>up>>x>>y>>x1>>y1>>x2>>y2;

   // check if player can move

   if ((x== x1 && x==x2 && left+right>0) || (y==y1 && y==y2 && up+down>0)){
         cout<<"NO"<<endl;
   }else{
        long long endX = x-left+right;
        long long endY = y -down+up;

        if (endX >=x1 && endX <=x2 && endY >= y1 && endY<=y2)
           cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;

    }

 }

int main() {
  int T; cin>>T;
   while (T--)
      solve();
 }
