#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int i=0,j=0;
        int c=0,count=0,power=k+1,r=0;
        while((i<n) && (j<n))
        {
            if(s[i]=='M')
            {
                if(s[j]=='I')
                {
                    if(i<j)
                    {
                        
                        for(int k=i;k<j;k++)
                        {
                            if(s[k]==':')
                                c++;
                        }
                    }
                    else if(i>j)
                    {
                        for(int k=j;k<i;k++)
                        {
                            if(s[k]==':')
                                c++;
                        }
                    }
                    r=power-abs(i-j)-c;
                    if(r>0)
                    {
                        count++;
                        i++;
                        j++;
                        c=0;
                    }
                    else
                    {
                        if(i>j)
                        {
                            j++;
                            c=0;
                        }
                        else
                        {
                            i++;
                            c=0;
                        }
                    }
                }

                else if(s[j]=='X')
                {
                    i=j;
                    i++;
                    j++;
                    c=0;
                }
                else
                    j++;
            }
            else if(s[i]=='X')
            {
                j=i;
                i++;
                j++;
                c=0;
            }
            else
                i++;
        }
        cout<<count<<endl;
    }
    return 0;

}
