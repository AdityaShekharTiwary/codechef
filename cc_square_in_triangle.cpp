#include<bits/stdc++.h>
using namespace std;
int numberOfSquares(int base)
{
    base = (base - 2);
    base = floor(base / 2);
    return base * (base + 1)/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int base;
        cin>>base;
        cout << numberOfSquares(base)<<endl;
    }

    return 0;
}

