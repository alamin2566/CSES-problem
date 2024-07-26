#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int n,x;
   cin>>n>>x;
   int arr[n+1];
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   map<int,int>mp;
   for(int i=1;i<=n;i++){
    if(mp.find(x-arr[i])!=mp.end()){
        cout<<mp[x-arr[i]]<<sp<<i<<endl;
        return 0;
    }
    mp[arr[i]]=i;
   }
   cout<<"IMPOSSIBLE"<<endl;
   return 0;
  }
