#include<bits/stdc++.h>
#define charToInt(c) (c-'0')
#include <cctype>
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
            s = s + x % 10;
            x = x / 10;
        }

        cout<<s<<endl;
    }
    return 0;
}

