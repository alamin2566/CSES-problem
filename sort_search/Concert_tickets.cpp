#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int solve(){
	ll n, m;
	cin >> n >> m;
	multiset<ll> price_of_ticket;
	for (ll i = 0; i < n; i++)
	{
		ll price;
		cin >> price;
		price_of_ticket.insert(price);
	}
	for (ll i = 0; i < m; i++)
	{
		ll price_paid_by_customer;
		cin >> price_paid_by_customer;

		auto it = price_of_ticket.upper_bound(price_paid_by_customer);
		if (it == price_of_ticket.begin())
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			cout << *(--it) << endl;
			price_of_ticket.erase(it);
		}
	}
	return 0;
}
int main()
{
	int testCase=1;
	while(testCase--){
		solve();
	}
	return 0;
}
