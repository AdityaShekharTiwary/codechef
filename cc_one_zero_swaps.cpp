#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,co=0,ce=0;
        string s,p;
        cin>>n>>s>>p;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && p[i]=='1') co++;
            if(s[i]=='1' && p[i]=='0') ce++;

            if(co>ce){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(co==ce) cout<<"YES"<<endl;
        else if(ce>co) cout<<"NO"<<endl;
    }
    return 0;
}
