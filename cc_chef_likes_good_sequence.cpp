#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,q;
        long long int arr[100000];
        cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        while(q--){
            long long int x,y;
            cin>>x>>y;
            arr[x-1]=y;
            int count=1;
            int ans=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]!=arr[i+1])
                    count++;
                else
                    count=1;
                ans=max(count,ans);
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}

