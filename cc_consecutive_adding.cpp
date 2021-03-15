#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define dbl double
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
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

ll a[1005][1005],b[1005][1005];

bool check(ll a[1005][1005],ll b[1005][1005],ll r,ll c){
	for(ll i=0;i<r;i++){
		for(ll j=0;j<c;j++){
			if(a[i][j]!=b[i][j]) return false;
		}
	}
	return true;
}

void solve()
{


}

int main()
{
	fast();

	test
	{
		ll r,c,x; cin>>r>>c>>x;
	ll i,j,k,diff;
	for(i=0;i<r;i++){
		for(ll j=0;j<c;j++){
			cin>>a[i][j];
		}
	}

	for(i=0;i<r;i++){
		for(ll j=0;j<c;j++){
			cin>>b[i][j];
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<=(c-x);j++){
				if(a[i][j]==b[i][j]) continue;
				else {
					diff=(b[i][j]-a[i][j]);
					a[i][j]+=diff;
					k=1;
					while(k<x){
						a[i][j+k]+=diff;
						k++;
					}

				}
			}
		}

		for(i=0;i<c;i++){
			for(j=0;j<=(r-x);j++){
				if(a[j][i]==b[j][i]) continue;
				else {
					diff=(b[j][i]-a[j][i]);
					a[j][i]+=diff;
					k=1;
					while(k<x){
						a[j+k][i]+=diff;
						k++;
					}

				}
			}
		}
		if(check(a,b,r,c)) cout<<"Yes\n";
		else cout<<"No\n";

	}

	return 0;
}