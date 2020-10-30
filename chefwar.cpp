#include <iostream>

using namespace std;

int main()
{
    int p,h,t;
    cin>>t;
    while(t>0){
        cin>>h>>p;
        while(h>0&&p>0){
            h-=p;
            p=p/2;
            if(h<=0)
                cout<<1<<endl;
            else if(p<=0)
                cout<<0<<endl;
        }
        t--;
    }
    return 0;
}
