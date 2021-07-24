#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define nline "\n"
#define vvi vector<vector<int>>
#define vi vector<int>

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


#define rep(i,s,e) for(ll i=s;i<e;i++)
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
    int n, m, l; cin >> n >> m >> l;
    map<int, int> hash;
    rep(i, 0, m) {
        int k; cin >> k;
        while (k--) {
            int x; cin >> x;

            hash.insert({x, i + 1});
        }

    }

    //for (auto it : hash) cout << it.first << " " << it.second << endl;

    vector<int> list(l);

    rep(i, 0, l) cin >> list[i];

    int cnt = 0;
    rep(i, 0, l) {
        if (hash[list[i - 1]] != hash[list[i]]) cnt++;
        //debug(hash[list[i]])
    }

    cout << cnt << nline;

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