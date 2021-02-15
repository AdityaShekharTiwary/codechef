#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000000
#define mod 1000000007
#define pb push_back
#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);
int func(vector<char> a,vector<char> b)
{
    set<char> s(a.begin(),a.end());
    int res=0;
    for(auto i:b)
        if(s.find(i)!=s.end())
            res++;
    return res;
}
int main()
{
    speedup
	int t=1;
	cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,vector<char>> mp;
        string s; 
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s.size()>0)
                mp[s.substr(1)].pb(s[0]);
        }
        int ans=0; 
        for(auto i:mp)
            for(auto j:mp)
                if(i.first != j.first)
                {
                    int temp=func(i.second,j.second);
                    ans+=(i.second.size()-temp)*(j.second.size()-temp);
                }
        cout<<ans<<endl;
	}
}