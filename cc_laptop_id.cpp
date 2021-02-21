#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	int f = 0;
	map<char,int>mp;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'a' || s[i]>'z')
		f = 1;
		
		mp[s[i]]++;
	}
	
	if(f==1)
	cout<<"The string is invalid";
	
	else
	{
		map<int,set<char>>mp1;
		
		for(auto it:mp)
		{
			mp1[it.second].insert(it.first);
		}
		
		if(mp1.size() == 1)
		{
			string d;
			for(auto it:mp1[0])
			{
				d += it;
			}
			cout<<d;
		}
		else if(mp1.size()>2)
		cout<<"The string is invalid";
		
		else
		{
		    int x1=0,x2,x3,x4;
		    for(auto it:mp1)
		    {
		    	if(x1==0)
		    	{
		    		x1 = it.first;
					x2 = it.second.size();
				}
				else
				{
					x3 = it.first;
					x4 = it.second.size();
				}
			}
			if(x4>x2)
			{
				if(x2!=1 || x1!=1)
				cout<<"The string is invalid";
				
				else
				{
					string d;
					auto t = mp1.begin()->second.begin();
					for(auto it:mp)
					{
						if(it.first == *t)
						continue;
						
						int y = x3;
						while(y--)
						{
							d += it.first;
						}
					}
					cout<<d;
				}
			}
			
			else if(x2>x4)
			{
				if(x4!=1 || x1+1!=x3)
				cout<<"The string is invalid";
				
				else
				{
					string d;
					for(auto it:mp)
					{
						int y = x1;
						while(y--)
						d+=it.first;
					}
					cout<<d;
				}
								
			}
			
			else if(x2==x4 && x2==1)
			{
				if(x3+1 == x1 || x1+1==x3)
				{
					string d;
					int y = min(x1,x3);
					for(auto it:mp)
					{
						while(y--)
						{
							d+=it.first;
						}
					}
					cout<<d;
				}
				else 
				cout<<"The string is invalid";
			}
			else
			cout<<"The string is invalid";
		}
	}
}