#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int y;

}
void helper(){
   int q;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt_pos=0,cnt_neg=0;
        while(n--)
        {
            ll m;
            cin>>m;
            vector<ll> arr(m);
            for(ll i=0;i<m;i++){
                cin>>arr[i];
                if(arr[i]>0) cnt_pos++;
                else cnt_neg++;
            }
        }
        cout<<cnt_pos*cnt_neg<<endl;
    }

    return 0;
}
