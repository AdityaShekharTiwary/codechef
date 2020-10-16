#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int res=-1,carry=0;
        long int n,k;
        cin>>n>>k;
        long long int arr[100000];
        //long long int *arr=new long long int(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(n==1)
            cout<<(arr[0]/k)+1 << endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>k)
                {
                    arr[i+1]+=arr[i]-k;
                    carry=arr[i]-k;
                }
                if(arr[i]<k)
                {
                    res=i+1;
                    break;
                }
            }
            if(res==-1)
            {
                cout<<n+(carry/k)+1 << endl;
            }
            else
            {
            cout<<res<<endl;
            }
        }
    }
    return 0;
}
