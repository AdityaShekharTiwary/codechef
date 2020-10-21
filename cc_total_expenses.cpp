#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int quantity=0,price=0;
	    double sum= 0.00;
	    cin>>quantity>>price;
	    sum = price*quantity;
	    if(quantity>1000){
	        sum =sum-(0.1*sum);
	    }
	    printf("%0.6lf\n",sum);
	}
	return 0;
}
