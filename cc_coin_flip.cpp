#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            int i,q,n;
            char H,T;
            cin >> i ;
            cin >> n;
            int *arr = new int(n);
            if(i == 1)
            {
                for(int x=0;x<n;x++)
                {
                    arr[x] = H;
                }
            }
            if(i == 2)
            {
                for(int x=0;x<n;x++)
                {
                    arr[x] = T;
                }
            }
            cin >> q;





        }

    }
    return 0;
}
