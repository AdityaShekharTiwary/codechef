#include<iostream>
using namespace std;
int main()
{
    int n,counteven=0,countodd=0,i;
    int *arr=new int(n);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            counteven++;
        }
        else if(arr[i]%2!=0)
        {
            countodd++;
        }
    }
    if(counteven>countodd)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else if(counteven<=countodd)
    {
        cout<<"NOT READY"<<endl;
    }

    return 0;
}
