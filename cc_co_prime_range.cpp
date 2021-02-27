#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define f2(i,s,e) for(int i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define MAXN 1000001
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

bool isprime(ll j)
{
    for(ll i=2;i*i<=j;i++)
    {
        if(j%i==0)
            return(false);

    }
    return(true);
}

void solve()
{
	int l,r;
    cin>>l>>r;
    ll res;
    for(int i=r+1;i<2*1e9;i++)
    {
        if(isprime(i))
        {
            res=i;
            break;
        }
    }
    cout<<res<<endl;
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
