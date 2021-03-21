#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long ar[],long long w){
  int even=0;

  for(int i=0;i<3;i++){
    if (ar[i]%2==0)
        even+=1;
  }
  if (w%2==0)
    even+=1;

  if (even>=3)
    return true;

  return false;
}

void solve(){
 long long ar[3],w;
 for(int i=0;i<3;i++)
    cin>>ar[i];
  cin>>w;
  sort(ar,ar+3);
  int counter=0;
  bool c=0;
  while(!isPalindrome(ar,w)){
    if (counter==2){
        c=1;
        break;
    }

    if(ar[0]<=0){
        break;
    }else{
       for(int i=0;i<3;i++)
          ar[i]--;
       w+=3;
    }
   ++counter;
  }


  if (c){
      w+=(ar[0]*3);
      ar[1]-=ar[0];
      ar[2]-=ar[0];
      ar[0]=0;
   cout<<(isPalindrome(ar,w)?"Yes":"No")<<endl;
  }else{
      cout<<(isPalindrome(ar,w)?"Yes":"No")<<endl;
  }
}

int main() {
 int T; cin>>T;

  while (T--)
    solve();

 }
