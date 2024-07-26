#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  int cnt=1;
  int ans=0;
  for(int i=1;i<s.size();i++){
      if(s[i]!=s[i-1]){
         ans=max(cnt,ans);
         cnt=1;
      }
      else{
        cnt++;
      }

  }
  cout<<max(cnt,ans)<<endl;
}
