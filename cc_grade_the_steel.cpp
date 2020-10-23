#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,c;
        float b;
        cin >> a >> b >> c;
        int x=0,y=0,z=0;
        if(a>50)
        x=1;
        if(b<0.7)
        y=1;
        if(c>5600)
        z=1;
        if(x & y & z)
        cout << "10\n";
        else if(x & y)
        cout << "9\n" ;
        else if(z & y)
        cout << "8\n";
        else if(x & z)
        cout << "7\n" ;
        else if(x || y || z)
        cout << "6\n";
        else
        {
            cout << "5\n";
        }
    }
    return 0;
}
