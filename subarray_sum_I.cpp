#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5+123;
#define ll long long
ll a[mx], sum[mx];

int main()
{


    int n, x;
    cin >> n >> x;
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    for ( int i = 1; i <= n; i++ ) sum[i] = a[i] + sum[i-1];

    map<ll, int> cnt;

    for ( int i = 1; i <= n; i++ ) cnt[sum[i]]++;
    ll ans = 0;

    cnt[0] = 1;
    for ( int i = n; i >= 1; i-- ) {
        cnt[sum[i]]--;
        ans += cnt[sum[i] - x];
    }

    cout << ans << endl;

    return 0;
}
