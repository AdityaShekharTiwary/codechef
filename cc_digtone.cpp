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

long long dSum(long long n)
{
    long long sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve()
{
	string s;
        long long a,b,i,s1=0,s2=0;
        cin>>s;
        cin>>a>>b;
        for(i=0;i<s.size();i++){
            if(i%2==0)s1+=(s[i]-'0')*a;
            else
            s2+=(s[i]-'0')*b;
        }
        long long sum = s1 +  s2;
        cout<<dSum(sum)<<endl;
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
