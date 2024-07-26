#include <bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main() {
    fast_tle;
    int n;
    cin >> n;
 if(n>1 and n<=3){
    cout<<"NO SOLUTION"<<endl;
   return 0;
 }
    vector<int> arr(n + 1);
    vector<int> brr(n + 1);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arr[i] = i;
        } else {
            brr[i] = i;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << sp;
        }

    }

    for(int i=1;i<=n;i++){
        if(brr[i]!=0){
            cout<<brr[i]<<sp;
        }
    }
    cout << endl;

    return 0;
}
