#include<bits/stdc++.h>
using namespace std;
void tower_of(int n,int src,int help,int dest){
    if(n>0){
        tower_of(n-1,src,dest,help);
        cout<<src<<" "<<dest<<endl;
        tower_of(n-1,help,src,dest);

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    tower_of(n,1,2,3);
}
