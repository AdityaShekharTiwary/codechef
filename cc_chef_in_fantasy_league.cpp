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
    test;
    {
        int n,s,min_d=200,min_f=200;
        cin>>n>>s;
        int a[100], b[100];
        f(i,0,n) cin>>a[i];
        f(i,0,n) cin>>b[i];
        f(i,0,n) {
            if(b[i]==0) min_d=min(min_d,a[i]);
            else if(b[i]==1) min_f=min(min_f,a[i]);
        }
       // cout<<min_d<<" "<<min_f<<endl;
        if(min_d+min_f+s<=100) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
