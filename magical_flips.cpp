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
    int n, ans = 0, mn = 0; cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vector<int> inverted(n, -1);
    for (int i = 29; i >= 0; i--) {
        int isPossible = 1;
        for (int j = 0; j < n; j++) {
            if (inverted[j] != -1) {
                if (inverted[j] == 1) isPossible = ((isPossible & (b[j] >> i) & 1));
                else isPossible = ((isPossible & (a[j] >> i) & 1));
                continue;
            }
            if (((a[j] >> i) & 1) || ((b[j] >> i) & 1)) {}
            else {
                isPossible = 0;
                break;
            }
        }
        if (!isPossible) continue;
        int val = 1;
        rep(j, 0, n) {
            if (inverted[j] != -1) {
                if (inverted[j] == 1) val = ((val & (b[j] >> i) & 1));
                else val = ((val & (a[j] >> i) & 1));
                continue;
            }
            if (((a[j] >> i) & 1) && ((b[j] >> i) & 1)) {}
            else if (((a[j] >> i) & 1)) inverted[j] = 0;
            else if (((b[j] >> i) & 1)) inverted[j] = 1, mn++;
            else {
                val = 0;
                break;
            }
        }
        ans += (val * (1ll << i));
    }
    cout << ans << " " << mn << '\n';


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
