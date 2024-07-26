#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   ll n;
   cin>>n;
   ll arr[n+3];
     ll sum=0;
   for(ll i=0;i<n-1;i++){
    cin>>arr[i];
    sum+=arr[i];
   }
   ll sum1= (n*(n+1))/2;
   cout<<sum1-sum<<endl;



  }
