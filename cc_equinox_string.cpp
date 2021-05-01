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
	ll n, a, b; cin >> n >> a >> b;
	ll sar = 0, anu = 0;
	string c = "EQUINOX";
	while (n--) {
		bool f = false;
		string s; cin >> s;
		for (int i = 0; i < c.size(); i++) {
			if (s[0] == c[i]) {
				f = true;
				break;
			}
		}
		if (f) sar += a;
		else anu += b;
	}
	//cout << sar << " " << anu << endl;
	if (sar > anu) cout << "SARTHAK\n";
	else if (anu > sar) cout << "ANURADHA\n";
	else cout << "DRAW\n";

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
