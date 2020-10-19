#include <iostream>
using namespace std;

int main() {
    int t, j;
    cin>>t;
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[1000] = {1};
        int m = 0;
        int carry = 0;
        for(int i=1; i<=n; i++) {
            for(j=0; j<=m; j++) {
            a[j] = (a[j]*i) + carry;
            carry = a[j]/10;
            a[j] = a[j] % 10;
        }
        while(carry) {
            m++;
            a[m] = carry % 10;
            carry /= 10;
        }
    }

        for(int i=m; i>=0; i--)
            cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
