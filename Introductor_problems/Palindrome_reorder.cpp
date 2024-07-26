#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
bool isPalin(string &s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
void solved(string &s){
    ll n=s.size();
    map<char,int>o;
    for(auto x:s){
        o[x]++;
    }
    string w="";
    for(auto x:o){
        if(x.second%2==1){
            w+=x.first;
            o[x.first]--;
        }
    }
    string start="";
    for(auto x:o){
        for(int k=0;k<x.second/2;k++){
            start+=x.first;
            o[x.first]--;
        }
    }
    string endd="";
    for(auto x:o){
        for(int k=0;k<x.second;k++){
            endd+=x.first;
            o[x.first]--;
        }
    }
        reverse(endd.begin(),endd.end());
        string res=start+w+endd;
        if(isPalin(res)){
            cout<<res<<endl;
        }
        else{
            cout<<"NO SOLUTION"<<endl;
        }

}
int main(){
   fast_tle;
   string s;
   cin>>s;
   solved(s);
   return 0;

  }
