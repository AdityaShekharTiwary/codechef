#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[10];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

            for(int i=1;i<=n;i++){
                sum+=arr[i];
            }
            //cout<<sum<<endl;
            if(sum<0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

    }
    return 0;
}
