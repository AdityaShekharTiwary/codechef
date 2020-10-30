#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],d[n],k=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>d[i];
        if(d[0]>a[n-1]+a[1] and d[0]>k)
        k=d[0];
        for(int i=1;i<n-1;i++)
        {
            if(d[i]>a[i-1]+a[i+1] and d[i]>k)
            {
                k=d[i];
            }
        }
        if(d[n-1]>a[n-2]+a[0] and d[n-1]>k)
        k=d[n-1];
        if(k!=0)
        cout<<k<<endl;
        else
        cout<<-1<<endl;
    }
	return 0;
}
