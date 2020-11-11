#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,count=0;
        int arr[1001];
        cin >> n >> k;
        for(int i=0;i<n;i++)
            cin >> arr[i];

         for (int i = 0; i < n; i++)
        {
            if (arr[i] > k)
            {
               count = -1 ;
               break;
            }

           // else if

              //  (arr[i] < k && arr[i] + arr[i+1] <= k)
                //count++;

                int sum = arr[i];
            count++;
            while ((i + 1) < n && (sum + arr[i+1]) <= k) {
                i++;
                sum += arr[i];


         }
        }

            cout << count << endl;



    }
    return 0;
}
