#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a>b)
            cout<<a<<" ";
		else
            cout<<b<<" ";
		cout<<a+b<<endl;
		}
}
