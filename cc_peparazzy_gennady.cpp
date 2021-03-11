#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define dbl double
#define vi vector<int>
#define pb push_back
#define input_arr for(ll i=0;i<n;i++) cin>>arr[i];
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


	fast_IO
	cout.tie(NULL);
}

void solve()
{

}

int main()
{
	fast();

	test
	{
		int n; cin>>n;
        vector<pair<int,int> > p,st;
        f(i,0,n){
            int v; cin>>v;
            p.pb({i+1,v});
        }
        //if(n==2) cout<<1<<endl;

        st.pb(p[0]);
        st.pb(p[1]);

        int ans=1,sz=st.size();

        f(i,2,n){
            while(st.size()>=2){

                dbl s1=((dbl)st[sz-1].ss - (dbl)st[sz-2].ss)/
                ((dbl)st[sz-1].ff - (dbl)st[sz-2].ff);

                dbl s2=((dbl)p[i].ss - (dbl)st[sz-1].ss)/
                ((dbl)p[i].ff - (dbl)st[sz-1].ff);

                if(s1<=s2){
                    st.pop_back();
                    sz--;
                }
                else break;
            }
            st.pb(p[i]);
            sz++;

            ans=max(ans,st[sz-1].ff-st[sz-2].ff);
        }

        cout<<ans<<endl;
        }

	return 0;
}


