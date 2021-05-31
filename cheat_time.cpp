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
vector<vector<int>>res;

void merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    res.clear();
    int j = 0;
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        vector<int>t;
        if (res[j][1] >= intervals[i][0])
        {
            t.push_back(min(res[j][0], intervals[i][0]));
            t.push_back(max(intervals[i][1], res[j][1]));
            res.erase(res.begin() + j);
            res.push_back(t);
            t.clear();
        }
        else
        {
            res.push_back(intervals[i]);
            j++;
        }
    }
}


void solve()
{

    ll n, k, f; cin >> n >> k >> f;
    vector<vector<int> > hash;
    vector<int> temp;
    ll total = 0;
    while (n--) {
        ll start, end; cin >> start >> end;
        temp.pb(start);
        temp.pb(end);
        hash.pb(temp);
        temp.clear();
    }

    merge(hash);
    for (int i = 0; i < res.size(); i++) {
        total += res[i][1] - res[i][0];
    }

    if (f - total  >= k) cout << "YES\n";
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