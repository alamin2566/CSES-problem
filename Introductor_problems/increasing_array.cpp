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
   ll arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

  ll  sum=0;
   for(int i=1;i<n;i++){
           if(arr[i]<arr[i-1]){
            sum+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
           }
    }



  cout<<sum<<endl;
}
