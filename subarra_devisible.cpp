#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int n;
    cin>>n;
    int arr[n+1],pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref[i]=pref[i-1]+arr[i];
        pref[i]%=n;
        pref[i]=(pref[i]+n)%n;
    }
    ll ans=0;
    map<int,int>mp;
    mp[pref[0]]++;
    for(int i=1;i<=n;i++){
        ans+=mp[pref[i]];
        mp[pref[i]]++;
    }
    cout<<ans<<endl;
  }
