#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 2e5+123;
ll a[mx], sum[mx];

int main()
{


    int n, x;
    cin >> n >> x;
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    for ( int i = 1; i <= n; i++ ) {
        sum[i] = a[i] + sum[i-1];
    }

    map<ll, int> cnt;
    for ( int i = 0; i <= n; i++ ) cnt[sum[i]]++;

    ll ans = 0;
    for ( int i = n; i >= 1; i-- ) {
        cnt[sum[i]]--;
        ll sub = sum[i] - x;
        ans += cnt[sub];
    }

    cout << ans << endl;

    return 0;
}
