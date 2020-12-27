#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        map<char,int>arr;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
        }
        int ans=n/3,res=0;
        for(auto it:arr){
            res+=(it.second)/2;
        }
        cout<<min(ans,res)<<endl;
    }
    return 0;
}
