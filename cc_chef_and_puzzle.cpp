#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b % a, a);
}
vector<int> findSum(int k,vector<int> &res)
{
    int count=0;
    for (int i = 1; i <k; i++) {
        if (gcd(i, k) == 1) {
                count++;
                res.pb(count);
        }
    }
    return res;
}

int main()
{
    fast
    vi res;
    findSum(1000000,res);
    test
    {
        int n;cin>>n;
        if(n==1) cout<<0<<endl;
        //f(i,0,n) cout<<res[i]<<" ";
        else cout <<res[n-2]<<endl;
    }
    return 0;
}
