#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define INF 1000000000000000000
typedef vector<vector<int>> vvi;
typedef vector<int> vi;

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
    int n, l; cin >> n >> l;
    string s; cin >> s;
    bool f = false;
    if (s[0] == '1') f = true;
    string temp = "";
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (f) {
            if (s[i] == '1') cnt++;
            else break;
        }
    }

    for (int i = cnt; i < n; i++) {
        temp += s[i];
    }
    cnt = 0;
    bool check = false;
    int rem = l;
    for (int i = 0; i < temp.size(); i++) {
        if (rem == 0) {
            check = true;
            break;
        }
        if (temp[i] == '0') cnt++;
        else {
            rem -= cnt;
            if (rem == 0) {
                check = true;
                break;
            }
            rem = 2 * (l - cnt);
            cnt = 0;
        }
        // debug(cnt)
        // debug(rem)
    }
    rem -= cnt;
    if (rem == 0 || check == true) cout << "YES\n";
    else cout << "NO\n";

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