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

void maxSubArray(vector<int>& nums) {
        int sum=0,max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
            
        }
        cout<<max<<endl;
    }

void solve()
{
	int n; cin>>n; 
	vi nums;
	f(i,0,n){
		 int x; cin>>x;
		 nums.pb(x);
	}
	maxSubArray(nums);
	//cout<<ans<<endl;
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