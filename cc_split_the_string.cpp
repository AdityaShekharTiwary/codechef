#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key=0;
        string s;
        cin>>n>>s;
        /*if(n==2){
            if(s[0]==s[1])
                key=1;
        }*/
        //else{
            char flag=s[n-1];
            for(int i=0;i<n-1;i++){
                if(s[i]==flag){
                    key=1;
                    break;
                }
            }

        if(key==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
