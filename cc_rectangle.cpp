#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vec vector<lli>
#define vecp vector<pair<lli,lli> >
#define mod 1000000007
#define INF 1000000000000000001
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define all(x) (x).begin(),(x).end()
#define ins insert
#define shree lli t;cin>>t;while(t--)
//lli gcd(lli a,lli b){if(a==0)return b;return gcd(b%a,a);}
//lli lcm(lli a,llib){return (a*b)/gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	shree
	{
		lli n,m,i,j,p=0,q=0;
		cin>>n>>m;
		map<lli,lli> r,c;
		for(i=0;i<n;i++)
		{
			string s;
			cin>>s;
			lli rc=0,f=0;
			for(j=0;j<m;j++)
			{
				if(s[j]=='1')
				{
					r[i]++;
					c[j]++;
					f=1;
					rc++;
				}
			}
			p=max(p,rc);
			if(f)
			q++;
		}
		lli f=1;
		
		for(auto it : r)
		{
			if(p!=it.S)
			{
				f=0;
				break;
			}
		}
	
		for(auto it : c)
		{
			if(q!=it.S)
			{
				f=0;
				break;
			}
		}
		if(f)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
	
}
