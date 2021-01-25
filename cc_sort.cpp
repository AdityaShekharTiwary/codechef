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


int main()
{
	fast
	//test
	{
        int n;cin>>n;
        vector<pair<int,int> > vp;
        while(n--){
            int x,b;cin>>x;
            string y;cin>>y;
            if(y.size()==3) b=0;
            if(y.size()==4) b=1;
            if(y.size()==5) b=2;
            vp.pb({x,b});
        }
         int mid=0,low=0,high=vp.size()-1;
         while(mid<=high){
            if(vp[mid]==0) swap(vp[mid++],vp[low++]);
            else if(vp[mid]==1) mid++;
            else swap(vp[mid],vp[high--]);
        }
        vector<pair<int,string> >ans;
        string k;
        f(i,0,vp.size()){
            if(vp.second=='0') k=red;
            if(vp.second=='1') k=blue;
            if(vp.second=='2') k=yellow;
            ans.pb({vp.first,k});
        }
        f(i,0,ans.size()) cout<<ans.first<<" "<<ans.second<<endl;
	}

	return 0;
}

