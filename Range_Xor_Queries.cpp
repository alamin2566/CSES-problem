#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=2e5+123;
 ll a[N],sum[N];

int main(){
   fast_tle;
   int n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++){
      cin>>a[i];
   }
      for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]^a[i];
      }
      while(q--){
        int l,r;
        cin>>l>>r;
        cout<<(sum[r]^sum[l-1])<<'\n';
      }


  }
