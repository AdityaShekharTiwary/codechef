#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,s=0;
        cin>>x;
        while (x != 0)
        {
            if(x % 10==4)
            {
                s++;
            }
            x = x / 10;
        }

        cout<<s<<endl;
    }
    return 0;
}


