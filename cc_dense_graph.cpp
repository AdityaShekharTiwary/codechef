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

vll pp1,pp2;

bool range(ll a ,ll b){
	for(ll i=0;i<pp1.size();i++){
		if(pp1[i]<=b && pp2[i]>=a) return true;
	}
	return false;
}

void solve()
{
	

}

void help(){

}

int main()
{
	fast();

	test
	{
		ll n,m,x,y; cin>>n>>m>>x>>y;
		ll a[m],b[m],c[m],d[m];

		for(ll i=0;i<m;i++){
			cin>>a[i]>>b[i]>>c[i]>>d[i];
		}

		if(x==y){
			cout<<"0"<<endl;
			continue;
		}

		ll di[m];
		ll ans=-1;
		ll z=0;
		vll q1;
		vll q2;

		for(ll i=0;i<m;i++){
			di[i]=0;
		}

		q1.pb(x);
		q2.pb(x);

		while(ans==-1 && q1.size()!=0){
			pp1.clear();
			pp2.clear();

			pp1=q1;
			pp2=q2;

			vll w1;
			vll w2;

			for(ll i=0;i<(m);i++){
				if((di[i]==0) && range(a[i],b[i])){
					w1.pb(c[i]);
					w2.pb(d[i]);
					if(c[i]<=y && d[i]>=y) ans=z+1;
					di[i]=1;
				}
			}
			q1=w1;
			q2=w2;
			z++;
		}
		cout<<ans<<endl;
	}

	return 0;
}