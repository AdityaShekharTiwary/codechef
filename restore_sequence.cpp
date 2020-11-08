#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=1;
        cin>>n;
        int b[100000];
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        int a[100000];
        int status = 1, num = 2, count, c;
       if (n>= 1)
       {
          a[1]=2;
       }

       for (count = 1; count <=n; )
       {
          for (c = 2; c <= (int)sqrt(num); c++)
          {
             if (num%c == 0)
             {
                status = 0;
                break;
             }
          }
          if (status != 0)
          {
             a[j]=num;
             count++;
             j++;
          }
          status = 1;
          num++;
       }
       /*for(int i=1;i<=n;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;*/
       int arr[100000];
       for(int i=1;i<=n;i++)
       {
           if(i==b[i])
           {
               arr[i]=a[i];
           }
           else
           {
               arr[i]=a[b[i]];
           }

           cout<<arr[i]<<" ";
       }

            cout<<endl;
    }
    return 0;
}
