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
   int arr[x];
   int mn=INT_MAX;
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   for(int i=0;i<x;i++){
    mn=min(mn,arr[i]);
   }


   cout<<mn<<endl;
  }
