#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,t;
    cin>>n>>t;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    sort(ar,ar+n);
  ll l=0,r=1e18;
  ll ans=(l+r)/2;
  while(l<=r)
  {
    ll mid=(l+r)/2;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        ll p=mid/ar[i];
        cnt+=p;
        if(cnt>=t)break;
    }
    if(cnt>=t)
    {
        ans=mid;
        r=mid-1;
    }
    else
    {
        l=mid+1;
    }

  }
  cout<<ans<<endl;
}
