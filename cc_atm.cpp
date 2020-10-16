#include<bits/stdc++.h>
using namespace std;
int main()
{
    float y;
    int x;
    cin>>x>>y;
    if(x%5!=0 || x+.50>y)
    {
        cout<<fixed << setprecision(2)<<y<<endl;
    }
    else
    {
        cout<<fixed << setprecision(2)<<y-(x+.50)<<endl;
    }

    return 0;
}
