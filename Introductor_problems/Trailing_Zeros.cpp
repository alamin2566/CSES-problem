#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int x;
   cin>>x;
   int dem=5,sum=0;
   while(x/dem>0){
     sum+=x/dem;
     dem*=5;
   }
   cout<<sum<<endl;

  }
