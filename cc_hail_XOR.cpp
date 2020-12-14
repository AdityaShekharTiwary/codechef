#include<bits/stdc++.h>
using namespace std;

void solve()
{

}

void declare()
{

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int arr[100000];
        for(long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int i = 0;
        long long int k;
        for(k = x; k > 0 && i < n-1; k--)
        {
            bool flag = 0;
            long long int p = log(arr[i])/log(2);
            long long int r = 1 << p;
            arr[i] = arr[i] ^ r;

            for(long long int j = i + 1; j < n; j++)
            {
                if((arr[j] ^ r) < arr[j])
                {
                    arr[j] = arr[j] ^ r;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                arr[n - 1] = arr[n - 1] ^ r;
            }
            while(arr[i] <= 0)
            {
                i++;
            }
        }
            long long int z = k + 1;
            if(z > 0)
            {
                if((n < 3) && (z % 2 == 0) && z > 0)
                {
                    arr[n - 1] = arr[n - 1] ^ 1;
                    arr[n - 2] = arr[n - 2] ^ 1;
                }
            }
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}
