#include<iostream>
using namespace std;
int hcf(int a,int b)
{
	int t;
	while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
	return a;
}
int main()
{
	int test;
	cin>>test;
	for(int j=0;j<test;j++)
	{
		int n;
		cin>>n;
		{
			int a[n];
			for(int i=0;i<n;i++)
			cin>>a[i];
			int temp;
			for(int i=1;i<n;i++)
			{
				if(i==1)
				{
					temp=hcf(a[i],a[i-1]);
				}
				else
				{
					temp=hcf(a[i],temp);
				}
			}
			for(int i=0;i<n;i++)
				a[i]=a[i]/temp;
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
				cout<<endl;
		}
	}
}
