#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int arr[N],n,k;
bool fc(ll x){
    for(int i=1;i<=n;i++){
        if(arr[i]>x)return false;
    }
    ll sum=arr[1];
     int cnt=1;
     for(int i=2;i<=n;i++){
        sum+=arr[i];
        if(sum>x){
            cnt++;
            sum=arr[i];
        }
     }
     return cnt<=k;
}
int main(){
   fast_tle;
   cin>>n>>k;
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   ll l=1,r=2e14,ans=0;
   while(l<=r){
    ll mid=(l+r)/2;
    if(fc(mid)){
        ans=mid;
        r=mid-1;
    }
    else{
        l=mid+1;
    }
   }
   cout<<ans<<endl;
  }
