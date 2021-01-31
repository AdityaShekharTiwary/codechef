#include <iostream>
#include<bits/stdc++.h>
#define li long long int
using namespace std;

int main()
{

    li t;
    cin>>t;

    while(t--){


        li n;
        cin>>n;

        string s;
        cin>>s;


        vector<li> zero(n,0);
        vector<li> one(n,0);

        li zz=0;

        for(int i=0;i<n;i++){

            if(s[i]=='0'){
                zz++;
            }

            zero[i]=zz;

        }

        li oo=0;

        for(int i=n-1;i>=0;i--){

            if(s[i]=='1'){
                oo++;
            }

            one[i]=oo;

        }

        li ans=min(n-zero[n-1],n-one[0]);

        for(int i=n-2;i>=0;i--){

            li val=n-(zero[i]+one[i+1]);

            ans=min(ans,val);

        }

        cout<<ans<<endl;


    }


    return 0;
}
