#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
const int mod=1000000007;
int main(){
   fast_tle;
   ll x;
   cin>>x;

    ll ans=1;
    for(int i=0;i<x;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
  }
