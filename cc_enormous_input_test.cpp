#include<iostream>
using namespace std;
int main()
{
    long long int t,k,count=0;
    cin>>t>>k;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%k==0)
            count++;

    }
     cout<<count<<endl;

    return 0;
}
