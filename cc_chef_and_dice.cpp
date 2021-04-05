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
	int n; cin>>n;
	ll sum=(n/4)*44;
	int rem=(n%4);
	if(n>=4){
		if(rem==0) sum+=16;
		if(rem==1) sum+=32;
		if(rem==2) sum+=44;
		if(rem==3) sum+=55;

		cout<<sum<<endl;
	}
	else{
		int res;
		if(rem==1) res=20;
		if(rem==2) res=36;
		if(rem==3) res=51;
		cout<<res<<endl;

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
