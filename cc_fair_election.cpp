#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m ;
        int a[1000];
        int b[1000];
        int sum_a=0,sum_b=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum_a+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sum_b+=b[i];
        }
        if(sum_a>sum_b) cout<<0<<endl;
        else
        {
            sort(a,a+n);
            sort(b,b+m);
            int count=0;
            for(int k=0;k<min(n,m);k++){
                if(sum_a<=sum_b){
                    sum_a = sum_a - a[k] + b[m-k-1];
                    sum_b =sum_b - b[m-k-1] + a[k];
                    count++;
                }
                else if(sum_a>sum_b) break;
            }
            if(count==min(n,m) && sum_a<=sum_b) cout<<-1<<endl;
            //if(sum_a==sum_b) cout<<-1<<endl;
            else cout<<count<<endl;
        }
    }
    return 0;
}
