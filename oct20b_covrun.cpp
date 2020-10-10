#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        string res;
        int arr[1000];
        cin>>n>>k>>x>>y;
        int b[2000];
        for(int i=0;i<n;i++)
        {
           arr[i]=i;
           b[i] = b[n + i] = arr[i];
        }
        k=k%n;
        if(x==y)
            {
                cout<<"YES"<<endl;
            }
        else if(k==0)
            cout<<"NO"<<endl;
        else
        {
          int i=1;
          while(true)
        {
            int temp=x+i*k;
            if(temp%n==y)
            {
                res ="YES";
                break;
            }
            if(temp%n==x)
            {
                res="NO";
                break;
            }
            i++;
        }
           cout<<res<<endl;
        }
    }

    return 0;
    }

