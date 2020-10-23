#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        int x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        int k=0;
        int a=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        int b=(x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
        int c=(x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
        if(a<=(r*r))
        k++;
        if(b<=(r*r))
        k++;
        if(c<=(r*r))
        k++;
        if(k>=2)
        cout << "yes\n";
        else
        cout << "no\n";
    }
    return 0;
}
