#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, l, sum=0;
        cin>>n;
        l = n%10;
        while(n>=10){
            n /= 10;
        }
        sum=n+l;
        cout<<sum<<endl;
    }

	return 0;
}
