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

bool comp(pair<long long,int>P,pair<long long,int>Q){
    if(P.first==Q.first){
        return P.second<Q.second;
    }
    return P.first>Q.first;
}

void solve()
{
		  int n;
          cin>>n;
          
          vector<pair<long long,int>>P;
          for(int i=0;i<n;++i){
              long long x;
              cin>>x;
              P.push_back({x,i+1});
          }
          
          sort(P.begin(),P.end(),comp);
          map<int,int>Q;
          for(int i=0;i<n;++i){
              Q[P[i].second]=i+1;
          }
          
          for(int i=1;i<=n;++i)
          cout<<Q[i]<<" ";
          cout<<endl;
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
