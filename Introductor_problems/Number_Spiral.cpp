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
   int t;
   cin>>t;
   while(t--){
    ll r,c;
    cin>>r>>c;
    ll mx=INT_MIN;

    mx=max(r,c);
    ll value=0;
     value=mx*mx-(mx-1);
    if(r==c){
        cout<<r*r-(r-1)<<endl;
    }
    else if(r>c){
            if(r%2==0){
                cout<<value+(r-c)<<endl;
            }
            else{
                cout<<value-(r-c)<<endl;
            }

    }
    else if(r<c){
            if(c%2==0){
                cout<<value-(c-r)<<endl;
            }
            else{
                cout<<value+(c-r)<<endl;
            }

    }
   }
  }
