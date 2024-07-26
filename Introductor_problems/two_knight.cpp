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

   for(ll i=1;i<=n;i++){
    cout<<((i*i)*(i*i-1)/2)-4*(i-1)*(i-2)<<endl;
   }
  }
