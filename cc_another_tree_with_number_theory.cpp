#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int solve(mi &hash,int &v,int &w){
	f(i,0,n){
	if(hash[arr[i]]==2 && w%2==0) solve(hash, hash[i].ff+1 ,w/2)
	if(hash )
	}
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO


	int n; cin>>n;
	vi arr(n-1);
	input_arr
	mi hash;
	f(i,0,n) hash[arr[i]]++;



	test
	{
		int v,w; cin>>v>>w;


	}

	return 0;
}
