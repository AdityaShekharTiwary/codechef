#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


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
	ll n,k,m; cin>>n>>m>>k;
	double mat[n+1][m+1];
	for(ll i=0;i<=n;i++){
		for(ll j=0;j<=m;j++){
			if(i==0 || j==0) mat[i][j]=0;
			else {
				cin>>mat[i][j];
			}
		}
	}

	for(ll i=0;i<=n;i++){
		double pre=0;
		for(ll j=0;j<=m;j++){
			mat[i][j]+=pre;
			pre=mat[i][j];
		}
	}

	for(ll j=0;j<=m;j++){
		double pre=0;
		for(ll i=0;i<=n;i++){
			mat[i][j]+=pre;
			pre=mat[i][j];
		}
	}

	ll zz=min(n,m);
	ll ans=0;
	for(ll len=1;len<=zz;len++){
		for(ll i=len;i<=n;i++){
			for(ll j=len;j<=m;j++){
				if((mat[i][j]+mat[i-len][j-len]-mat[i][j-len]-mat[i-len][j])/(len*len)>=k)
					ans++;
			}
		}
	}

	cout<<ans<<endl;


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
