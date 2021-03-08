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

void fibonacci(vll &arr,int n)
{
		int t1 = 0, t2 = 1, nextTerm = 0;
		for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            arr.pb(t1);
            continue;
        }
        if(i == 2) {
            arr.pb(t2);;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        arr.pb(nextTerm);
    }
}

void solve()
{
	int n,m; cin>>n>>m;
	vll a;
	if(n==1 && m==1) cout<<0<<endl;
	else {
		fibonacci(a,n);
		vll b;
		if(m%2==0){
			f(i,0,m){
				b.pb(a[i]%mod);
				b.pb(a[n-1-i]%mod);
				//cout<<a[i]%mod<<" "<<a[n-1-i]%mod<<" ";
			}
		}
		else {
			f(i,0,m/2){
				b.pb(a[i]%mod);
				b.pb(a[n-1-i]%mod);
			}
			b.pb(a[m/2+1]%mod);
		}
		//cout<<endl;
		f(i,0,m) cout<<b[i]<<" ";
		cout<<"\n";
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
