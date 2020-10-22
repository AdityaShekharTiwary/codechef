#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int sal;
	    double gross,hra,da;
	    cin>>sal;
	    if(sal<1500)
	    {
	        hra=sal*.10;
	        da=sal*.90;

	    }
	    else
	    {
	        hra=500;
	        da=sal*.98;

	    }
	    gross=sal+hra+da;
	    printf("%.2lf\n",gross);
	}
	return 0;
}
