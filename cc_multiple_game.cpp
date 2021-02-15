#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
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

void solve()
{
     int n,q,m;
        cin>>n>>q>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int b[1000001]={};
        map <pair<int,int>,int> mpp;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--,r--;
            if(a[l]>m){
                continue;
            }
            else if(a[l]<=m && a[r]>m){
                b[a[l]]++;
                b[m+1]--;
            }else{
                b[a[l]]++;
                b[m+1]--;
                mpp[{a[l],a[r]}]++;
            }
        }
        for(auto x:mpp){
            int ai=x.first.first;
            int bi=x.first.second;
            int l=x.second;
            b[bi+ai]-=l;
            b[bi + 2 * ai]+=l;
            int  c=bi + 2 * ai;
            while(c+bi <= m){
                c+=bi;
                b[c]-=l;
                b[c+ai]+=l;
                c+=ai;
            }
        }
        int mx=0;
        for(int i=1;i<=m;i++){
            b[i]+=b[i-1];
            mx=max(mx,b[i]);
        }
        cout<<mx<<endl;


}



int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    fast_IO

    test
    {
        solve();
    }

    return 0;
}
