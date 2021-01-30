#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define v vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int he;
    int she;

}

int main()
{
	fast
	test
	{
        int n,odd=0,even=0; cin>>n;
        v arr(n);
        input_arr
        f(i,0,n){
             if(arr[i]%2!=0) odd++;
             else even++;
        }
        cout<<min(odd,even)<<endl;
	}

	return 0;
}

