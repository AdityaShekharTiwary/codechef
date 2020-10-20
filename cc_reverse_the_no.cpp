#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,r;
        cin>>n;

        while(n!=0)
        {
            r=n%10;
            m=10*m+r;
            n=n/10;
        }
        cout<<m<<endl;

    }
    return 0;
}
