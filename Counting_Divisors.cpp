#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define nn '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e6+123;
int cnt[N];

int main(){
   fast_tle;
   int lim=1e6;
   for(int i=1;i<=lim;i++){
    for(int j=i;j<=lim;j+=i){
        cnt[j]++;
    }
   }
   int n;
   cin>>n;
   while(n--){
       int x;
       cin>>x;
        cout<<cnt[x]<<nn;

   }
   return 0;
  }
