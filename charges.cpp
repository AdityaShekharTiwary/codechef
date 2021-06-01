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

void solve()
{
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll initial = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) initial++;
        else initial += 2;
    }

    debug(initial)


    while (k--) {

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int x; cin >> x;
        if (s[x - 1] == '0') s[x - 1] = '1';
        else s[x - 1] = '0';

        debug(s)

        // corner cases
        if (x == 1 || x == n) {
            if (x == 1) {
                if (s[0] == s[1]) initial++;
                else initial--;
            }
            if (x == n) {
                if (s[n - 1] == s[n - 2]) initial++;
                else initial--;
            }
        }
        else {
            // checking on the right side
            if (s[x - 1] == s[x]) initial++;
            if (s[x - 1] != s[x]) initial--;

            // checking on the left side
            if (s[x - 1] == s[x - 2]) initial++;
            if (s[x - 1] != s[x - 2]) initial--;
        }

        cout << initial << endl;
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