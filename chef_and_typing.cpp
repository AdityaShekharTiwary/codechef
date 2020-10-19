#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    string s[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	        cin>>s[i];
	   for(int i=0;i<n;i++)
	   {
	        string x=s[i];
	        string hand="";
	        if(x[0]=='d' || x[0]=='f')
	            hand="l";
	        else
	            hand="r";
	        int count=2;
	        for(int i=1;i<x.size();i++)
	        {
	            if((x[i]=='d' || x[i]=='f') && (hand=="l"))
	                count+=4;
	            else if((x[i]=='d' || x[i]=='f') && (hand=="r"))
	            {
	                count+=2;
	                hand="l";
	            }
	            else if((x[i]=='j' || x[i]=='k') && (hand=="r"))
	                count+=4;
	            else if((x[i]=='j' || x[i]=='k') && (hand=="l"))
	            {
	                count+=2;
	                hand="r";
	            }
	        }
	        for(int j=0;j<i;j++)
	        {
	            if(s[i]==s[j]){
	                count/=2;
	                break;
	            }
	        }
	        sum+=count;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
