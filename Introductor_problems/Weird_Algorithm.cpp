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
   cout<<n<<sp;
   while(n!=1){

    if(n%2==0){
          n=n/2;
        cout<<n<<sp;
    }
    else{
       n=n*3+1;
        cout<<n<<sp;
    }

    if(n==1){
        break;
    }
   }
  }
