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
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
	fast
	test
	{
        string s;cin>>s;
        int n=s.size();
        int one=0,two=0,three=0,four=0;
        if(n<10) cout<<"NO"<<endl;
        else {
            for(int i=0;i<n;i++){
                if(s[i]>='A' && s[i]<='Z' && i!=0 && i!=n-1) one++;
                if(s[i]>='a' && s[i]<='z') two++;
                if(s[i]>='0' && s[i]<='9' && i!=0 && i!=n-1) three++;
                if((s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?')){
                    if((i!=0 && i!=n-1)) four++;
                }
            }
            if(one>=1 && two>=1 && three>=1 && four>=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}

	return 0;
}

