#include<bits/stdc++.h>
#define ll long long int
#define l long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vl vector<l>
#define vi vector<int>
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fast;
    test
    {
        int n; cin>>n;
        mi m;
        while(n--){
            int p,s; cin>>p>>s;
            if(p<=8) {
                if(s>m[p]) m[p]=s;
            }
        }
        int sum=0;
        for(auto x:m) sum+=x.second;
        cout<<sum<<endl;
    }
    return 0;
}

