#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,sum=0;
        cin>>n>>k>>d;
        int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<k) cout<<0<<endl;
        else cout<<min(sum/k,d)<<endl;
    }
    return 0;
}
