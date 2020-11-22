#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>d>>n;
        for(int i=0;i<d;i++)
        {
            n=n*(n+1)/2;
        }
        cout<<n<<endl;
    }
    return 0;
}
