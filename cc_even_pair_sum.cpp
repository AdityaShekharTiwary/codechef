#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int even1=0,odd1=0,even2=0,odd2=0;
        even1=a/2;
        odd1=a-even1;
        even2=b/2;
        odd2=b-even2;
        long long int ans=(even1*even2)+(odd1*odd2);
        cout<<ans<<endl;;

    }
    return 0;
}
