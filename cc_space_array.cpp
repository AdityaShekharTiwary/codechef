#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(ll i=0;i<n;i++) cin>>arr[i];
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
		vi arr(n+1);
		for(int i=1;i<=n;i++) cin>>arr[i];
		bool f=true;
		int sum=0;
		sort(arr.begin(),arr.end());
		for(int i=1;i<=n;i++){
			if(arr[i]<=i) sum+=i-arr[i];
			else f=false;
		}
		if(f) {
			if(sum%2==0) cout<<"Second\n";
			else cout<<"First\n";
		}
		else cout<<"Second\n";			
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
