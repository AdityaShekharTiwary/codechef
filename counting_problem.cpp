#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define nline "\n"
#define all(x) (x).begin(), (x).end()


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

#define rep(i,s,e) for(int i=s;i<e;i++)
#define repp(i,s,e) for(int i=s;i<=e;i++)
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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    rep(i, 0, n) cin >> arr[i];
    bool all_zero = true;
    for (auto x : arr) {
        if (x > 0) {
            all_zero = false;
            break;
        }
    }
    if (all_zero) {
        cout << 0 << nline;
        return;
    }
    if (k == 0) {
        ll ans = 0;
        for (auto x : arr) {
            ans += x;
        }
        cout << ans << nline;
        return;
    }
    set<ll> pos;
    set<ll, greater<ll>> posG;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos.insert(i);
            posG.insert(i);
            pos.insert(i + n);
            posG.insert(i + n);
        }
    }
    vector<ll> ans_arr(n, k);
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            ll val1 = *pos.lower_bound(i);
            ll val2 = *posG.lower_bound(i + n);
            ll dist = min(abs(val1 - i), abs(val2 - (i + n)));
            ans_arr[i] -= dist;
        }
    }
    for (auto &x : ans_arr) {
        if (x < 0) {
            x = 0;
        }
    }
    ll sum = 0;
    for (auto x : arr) {
        sum += x;
    }
    for (auto x : ans_arr) {
        sum += 2LL * x;
    }
    cout << sum << nline;
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

