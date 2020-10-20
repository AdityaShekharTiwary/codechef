#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    long long N;
	    cin>>N;
	    int res = 0;
	    res = res + (N/100);
	    N = N % 100;
	    res = res + (N/50);
	    N = N % 50;
	    res = res + (N/10);
	    N =  N % 10;
	    res = res + (N/5);
	    N =  N % 5;
	    res = res + (N/2);
	    N =  N % 2;
	    res = res + (N/1);
	    N =  N % 1;
	    cout<<res<<endl;
	}
	return 0;
}
