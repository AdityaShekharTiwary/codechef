#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	 int c1=0,c2=0,max=0,lead=0,leadp=0;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;

	    c1=c1+a;
	    c2=c2+b;
	    if(c1>c2)
	    {
	        lead=c1-c2;
	        if(lead>max)
	        {
	            max=lead;
	            leadp=1;
	        }
	    }
	    else
	    {
	        lead=c2-c1;
	        if(lead>max)
	        {
	            max=lead;
	            leadp=2;

	        }
	    }

	}
    cout<<leadp<<" "<< max;
	return 0;
}
