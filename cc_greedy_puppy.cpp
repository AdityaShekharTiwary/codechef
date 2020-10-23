#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    int res=0;
	    for(int i=1;i<=b;i++)
	    {
	        int ans=a%i;
	        res=max(res,ans);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
