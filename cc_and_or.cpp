#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<0)
            cout<<-1<<endl;
        else
        {
            ll g;
            g=n/2;
            cout<<g<<" "<<n-g<<endl;
        }
    }
    return 0;
}
