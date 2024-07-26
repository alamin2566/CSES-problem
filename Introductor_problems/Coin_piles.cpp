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
   ll t;
   cin>>t;
   while(t--){
    ll a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
     if(2*a>=b and (a+b)%3==0){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }
  }
