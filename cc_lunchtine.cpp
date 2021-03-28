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

void solve()
{
	int n; cin>>n;
	vll arr(n);
	input_arr
	int res[n]={0};
	for(int l=0;l<n;l++){
		for(int r=l+1;r<n;r++){
			if(l==r) continue;
			else if(arr[l]==arr[r]){
				res[l]++;
				res[r]++;
			}
			else if(arr[l]<arr[r]) break;
		}
	}
	f(i,0,n) cout<<res[i]<<" ";
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
