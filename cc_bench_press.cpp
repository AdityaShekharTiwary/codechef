#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	fast_IO
	cout.tie(NULL);
}

void solve()
{
	ll n, w, wr; cin >> n >> w >> wr;
	ll arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (wr >= w)
	{
		cout << "YES" << endl;
	}
	else {
		ll sum = wr;
		unordered_map<ll, ll> mp;
		for (int i = 0; i < n; i++)
		{
			mp[arr[i]]++;

		}
		for (auto i : mp)
		{
			if (i.second % 2 == 0) sum += (i.second * i.first);

		}
		if (sum >= w) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}


int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
