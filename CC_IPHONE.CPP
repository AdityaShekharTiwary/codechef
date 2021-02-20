#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
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
	int total=0,curr=0;

	if(n>90) {
		total=(n-90)*3+(70*6)+(20*9);
	}
	if(n>20 && n<90){
		total=(n-20)*6+(20*9);
	}
	else total=n*9;

	cout<<total/60<<":"<<total%60<<endl;

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
