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
        int arr[4];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int a,b,res=0;
        if(n==1)
        {
            cout<<arr[0]<<endl;
        }
        else if(n==2)
        {
            cout<<arr[0]<<endl;
        }
        //n=3
        else if(n==3)
        {
            a=arr[0];
            b=arr[1];
            //3rd element
            if(a<b)
            {
                res+=a;
                b=b-a;
                a=arr[2];
            }
            else
            {
                res+=b;
                a=a-b;
                b=arr[2];
            }
            if(a>b)
                res+=a;
            else
                res+=b;
            cout<<res<<endl;
        }
        // n=4
        else if(n==4)
        {
            a=arr[0];
            b=arr[1];
            // 3rd element
            if(a<b)
            {
                res+=a;
                b=b-a;
                a=arr[2];
            }
            else
            {
                res+=b;
                a=a-b;
                b=arr[2];
            }
            // 4th element
            if(a<b)
            {
                res+=a;
                b=b-a;
                a=arr[3];
            }
            else
            {
                res+=b;
                a=a-b;
                b=arr[3];
            }
            if(a>b)
                res+=a;
            else
                res+=b;
            cout<<res<<endl;
        }

    }
    return 0;
}
