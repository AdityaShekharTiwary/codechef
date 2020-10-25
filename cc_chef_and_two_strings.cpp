#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int min_diff=0;
        int max_diff=0;
        for(int  i=0;i<s1.length();i++){
            if(s1[i]=='?' or s2[i]=='?'){
                continue;
            }
             if(s1[i]!=s2[i]){
                min_diff++;
                max_diff++;
            }
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='?' && s2[i]=='?'){
                count1++;
            }
            else if(s1[i]=='?' || s2[i]=='?'){
                count2++;
            }
        }
        max_diff+=count1+count2;
        cout<<min_diff<<" "<<max_diff<<endl;
    }
}
