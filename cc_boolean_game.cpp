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

constexpr int MAXN=(int)1e6;
int dp[MAXN+2],dp1[MAXN+2];
int next0[MAXN],next1[MAXN];

void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO	
	cout.tie(NULL); 
}

void solve()
{
	ll n,m,k; cin>>n>>m>>k;
	vll g(n+1);
	for(ll i=0;i<n;i++) cin>>g[i+1];

	vector<vector<pair<ll,ll>>> arr(n+1),dp(n+1);
	
	for(ll i=0;i<m;i++){
		ll u,v,d; cin>>u>>v>>d;
		arr[u].pb(mp(i,d));
		arr[v].pb(mp(i,d));
	}

	dp[0].pb(mp(0,0));
	for(ll i=1;i<=n;i++){
		vector<pair<ll,ll>>temp;
		temp.insert(temp.end(),dp[i-1].begin(),dp[i-1].end());
		ll curr=0,mask=0;
		set<ll> open;
		for(ll j=i;j>=1;j--){
			curr+=g[j];
			mask^=1LL<<j;
			for(auto xyz:arr[j]){
				if(open.count(xyz.first)) curr+=xyz.second;
				else open.insert(xyz.first);
			}
			if(j>1) {
				for(auto p:dp[j-2])
					temp.pb(mp(p.first+curr,mask^p.second));
			}
			else temp.pb(mp(curr,mask));
		}
		sort(temp.begin(),temp.end());
		reverse(temp.begin(),temp.end());
		set<ll> sel;
		ll filled=0;
		for(ll j=0;j<temp.size()&&filled<k;j++){
			if(sel.count(temp[j].second)) continue;
			dp[i].pb(temp[j]);
			filled++;
			sel.insert(temp[j].second);
		}

	}

	for(ll i=0;i<k;i++) cout<<dp[n][i].first<<" ";
	cout<<"\n";

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
