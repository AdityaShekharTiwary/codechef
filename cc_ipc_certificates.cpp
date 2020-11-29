#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int count=0;
    while(n--){
        int arr[1001];
        for(int i=0;i<k+1;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=m && arr[k]<=10){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
