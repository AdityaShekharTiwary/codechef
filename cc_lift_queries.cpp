#include<bits/stdc++.h>
#define ll long long int
#define l long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vl vector<l>
#define v vector<int>
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fast;
    test{
        int n,q; cin>>n>>q;
        ll ans=0,last=0;
        for(int i=0;i<q;i++){
            int f,d; cin>>f>>d;
            ans+=abs(last-f);
            ans+=abs(d-f);
            last=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
