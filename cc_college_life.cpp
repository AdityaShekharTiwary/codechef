#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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

long long int minv(long long int a,long long int b)
{
	if(a<b)
		return a;
	return b;
}

long long int maxv(long long int a,long long int b)
{
	if(a>b)
		return a;
	return b;
}

long long int res(long long int n,long long int e,long long int h,long long int a,long long int b,long long int c)
{
	if(n<=0)
		return 0;
	
	long long ans=1e15;
	if(2*n<=e)
	{
		ans=minv(ans,n*a);
	}
	if(3*n<=h)
	{
		ans=minv(ans,n*b);
	}
	if(n<=e && n<=h) 
	{
		ans=minv(ans,n*c);
	}
	if( ((h-n)/2>=1) && ((h-n)/2 >= n-e) ) 
	{
		if(b-c<0)
		{
			long long int temp=minv(n-1,(h-n)/2);
			ans=minv(ans,(b-c) * temp + n*c );
				
		}
		else
		{
			long long int temp=maxv(1,n-e);
			ans=minv(ans,(b-c)*temp+n*c); 
		}
	}
	if(e-n>=1 && e-n >= n-h) 
	{
		if(a-c<0)
		{
			long long int temp=minv(n-1,e-n);
			ans=minv(ans,(a-c)*temp + n*c);
		}
		else
		{
			long long int temp=maxv(1,n-h);
			ans=minv(ans,(a-c)*temp+n*c);
		}
	}
	if((e/2>=1) && (e/2>=(3*n-h+2)/3) )
	{
		if(a-b<0)
		{
			long long int temp=minv(n-1,e/2);
			ans=minv(ans,(a-b)*temp+n*b);
		}
		else
		{
			long long int temp=maxv(1,(3*n-h+2)/3);
			ans=minv(ans,(a-b)*temp+n*b);
		}
	}
	if(e>=3 && h>=4 && n>=3)
	{
		ans=minv(ans,a+b+c+res(n-3,e-3,h-4,a,b,c));
	}
	return ans;
}	


void solve()
{
	long long int n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		
		long long int ans;
		ans=res(n,e,h,a,b,c);
		
		if(ans==1e15)
		{
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
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
