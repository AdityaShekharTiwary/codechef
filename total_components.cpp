#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
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
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

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

const ll mod = 1e9 + 7;
const int n = 1e7 + 2;

vector<bool> prime(n, true);
vector<int> prefix_prime(n);


void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) prime[j] = false;
        }
    }
}

void prefix()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (prime[i]) cnt++;
        prefix_prime[i] = cnt;
    }
}

void solve()
{
    int n; cin >> n;
    if (n == 2) cout << 1 << endl;
    else if (n == 3) cout << 2 << endl;
    else {
        int ans = prefix_prime[n] - prefix_prime[n / 2];
        cout << ans + 1 << endl;
    }
}



int main()
{
    fast();
    sieve();
    prefix();

    test
    {
        solve();
    }

    return 0;
}