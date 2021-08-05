#include <bits/stdc++.h>
#define ll long long
using namespace std;

int getScore(string s,int len, char target, int a, int b){
    int current=0,next=current+1,total=0;
    while(next < len){
        if(next == len-1){
            if(s[next] == s[current] && s[current] == target){
                total+= ((next - current)+1)*a +b;
                return total;
            }else if (s[next] != s[current]){
                total+= (next - current)*a +b;
                return total;
            }
        }

        if(s[current] == target){
            if(s[next] == target){
                next++;
            }else{
               total+=(next - current)*a +b;
               current=next;
               next=current+1;
            }
        }else{
            current++;
            next++;
        }
    }
    return total;
}

void solve() {
 int n,a,b; cin >>n>>a>>b;
 string s; cin>>s;
 int zero=0,one=0;
  for(int i=0;i<n;i++){
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
 if (n == 1){
    cout<< n * (a+b)<<endl;
 }else{
      // case-1  all one by one

      // case-2 'ones' in group and 'zeros' in group

      // case-3 'ones' in group and 'zeros' OBO

      // case-4 'ones' in OBO and 'zeros' in group

     int case1 = n * (a+b);

     int case2 = getScore(s,n,'1',a,b) + zero*a+b;

     int case2_1 = getScore(s,n,'0',a,b) + one*a+b;

     int case3 = getScore(s,n,'1',a,b) + zero*(a+b);

     int case4 = getScore(s,n,'0',a,b) + one*(a+b);

     cout<<max(max(case1,case2),max(case2_1,max(case3,case4)))<<endl;
 }

 }

int main(){
  int T; cin >>T;
  while(T--)
    solve();
}
