#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

constexpr int MAXN=(int)1e6;
int dp[MAXN+2],dp1[MAXN+2];
int next0[MAXN],next1[MAXN];

void fast()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

    fast_IO 
    cout.tie(NULL); 
}

void solve()
{
    
}

int main()
{
    fast();

    int T,Q,D; cin>>T>>Q>>D;
    while(T--){
        ll x = -2e18 ;
        ll r = 2e18;
        ll y1 = x;
        ll y2 = r;
        ll current = 1LL;
        string cc;
        ll mid = (x + r) / 2;
        while(x <= r)
        {
            mid = (x + r)/2;
            if(current == 1LL)
            {
                cout<<current<<" "<<mid<<" "<<y1<<endl;
            }
            else
            {
                cout<<current<<" "<<mid<<" "<<y1<<" "<<mid<<" "<<y2<<endl;
            }
            cin>>cc;
            if(cc[0] == 'X')
            {
                current = 2LL;
            }
            if(cc == "O")
            {
                break;
            }
            if(cc[0] == 'N')
            {
                x = mid + 1LL;
            }
            if(cc[0] == 'P')
            {
                r = mid-1LL;
            }
        }
        
    }

    return 0;
}
