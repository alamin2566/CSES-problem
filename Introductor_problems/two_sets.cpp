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
   ll x;
   cin>>x;
   ll sum=0;
   sum=(x*(x+1))/2;

   vector<ll>s,s1;

   if(sum%2==0){
        cout<<"YES"<<endl;
        ll mid=sum/2;
         for(int i=x;i>=1;i--){

             if(i<=mid){
                s.push_back(i);
                   mid=mid-i;
             }
             else{
                s1.push_back(i);
             }
         }
    cout<<s.size()<<endl;
   for(ll i=0;i<s.size();i++){
    cout<<s[i]<<sp;
   }
     cout<<endl;
     cout<<s1.size()<<endl;
     for(ll i=0;i<s1.size();i++){
        cout<<s1[i]<<sp;
     }
      cout<<endl;



   }
   else
    cout<<"NO"<<endl;

  }
