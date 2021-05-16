#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}

int n = 4e6 + 5;
vi a(n), b(n);

void help()
{
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	for (int i = 2; i < n; i++) {
		if (a[i] == i) {
			a[i] = i - 1;
			for (int j = 2 * i; j < n; j += i) {
				a[j] = (a[j] / i) * (i - 1);
			}
		}
	}
	for (int i = 1; i < n; i++) {
		b[i] += i - 1;
		for (int j = 2 * i; j < n; j += i) {
			b[j] += i * ((1 + a[j / i]) / 2);
		}
	}
}


void solve()
{
	help();

	int k; scanf("%d", &k);
	while (k--) {
		int x; scanf("%d", &x);
		printf("%d\n", b[4 * x + 1]);
	}

}




int main()
{
	fast();

	//test
	{
		solve();
	}

	return 0;
}
