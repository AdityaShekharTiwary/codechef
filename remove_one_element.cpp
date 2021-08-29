#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define nline "\n"
#define in int


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define rep(i,s,e) for(ll i=s;i<e;i++)
#define repp(i,s,e) for(ll i=s;i<=e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll mod = 1e9 + 7;

void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}


void solve()
{
	int n; cin >> n;
	ll ans = INT_MAX;
	vector<int> a(n), b(n - 1);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n - 1) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	ll d1 = b[0] - a[0], d2 = b[0] - a[1], cnt = 0;
	rep(i, 0, n) {
		if (!binary_search(b.begin(), b.end(), a[i] + d1))
			cnt++;
	}
	if (cnt <= 2 && d1 > 0)
		ans = min(ans, d1);
	cnt = 0;
	rep(i, 0, n) {
		if (!binary_search(b.begin(), b.end(), a[i] + d2))
			cnt++;
	}
	if (cnt <= 2 && d2 > 0) ans = min(ans, d2);
	cout << ans << '\n';
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
