#include <iostream>
#define min(a,b) ((a<b)?a:b)
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    char cake[n][m];
	    int i,j, sum1=0, sum2=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>cake[i][j];
	            if((i+j)%2==0)
	            {n
	                if(cake[i][j]=='R') sum2 += 5;
	                else sum1 += 3;
	            }
	            else
	            {
	                if(cake[i][j]=='R') sum1 += 5;
	                else sum2 += 3;
	            }
	        }
	    }
	    cout<<min(sum1, sum2)<<endl;
	}
	return 0;
}
