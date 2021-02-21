#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    
    int m=INT_MIN;
    
    int a[x],b[y],c[z];
    for(int i=0;i<x;i++)
    cin>>a[i];
    
    for(int i=0;i<y;i++)
    cin>>b[i];
    
    for(int i=0;i<z;i++)
    cin>>c[i];
    
    sort(a,a+x);
    sort(b,b+y);
    sort(c,c+z);
    
    if(a[0]+b[0]+c[0] > n)
    cout<<"-1"<<endl;
    
    else
    {
        for(int i=0;i<x;i++)
        {
            int sum = a[i];
            
            if(sum+b[0]+c[0] > n)
            break;
            
            for(int j=0;j<y;j++)
            {
                sum += b[j];
                for(int k=0;k<z;k++)
                {
                    sum += c[k];
                    
                    if(sum<=n)
                    m = max(m,sum);
                    
                    sum -= c[k];
                }
                sum -= b[j];
            }
        }
        cout<<n-m<<endl;
    }
}