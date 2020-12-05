#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[1000];
        int danger=0,fine=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=80 || arr[i]<=9)
                danger++;
            else
                fine++;
        }
        cout<<danger<<" "<<fine<<endl;
        int sum=ceil((double)danger/(double)d)+ceil((double)fine/(double)d);
        cout<<sum<<endl;


    }
    return 0;
}
