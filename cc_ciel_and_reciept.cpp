#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>>t;
    while (t--) {
        int p, m= 0, price=2048;
        cin>>p;
        while (p > 0) {
            m += (p/price);
            p %= price;
            price /= 2;
        }
        cout<<m<<"\n";
    }
	return 0;
}
