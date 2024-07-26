#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int prime[1000005];
void seive(){
   for(int i=2;i<=100000;i++){
          if(prime[i]==0){
            for(int j=i*2;j<=100000;j+=i){
                if(prime[j]==0){
                    prime[j]=i;
                }
            }
          }
   }
}
int main(){
   fast_tle;
   seive();
   int t;
   cin>>t;
   while(t--){
     int x;
     cin>>x;
     cout<<prime[x]<<endl;
   }

  }
