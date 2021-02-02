#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#include<string>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void length(string str)
{
    int count = 0;
    bool flag = false;
    for (int i = str.size() - 1; i >= 0; i--) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            flag = true;
            count++;
        }
        else {
            if (flag == true)
                cout<<count<<endl;
                return;
        }
    }
    cout<< count<<endl;
    return;
}


int main()
{
	fast
	//test
	{
	   // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    string str;
        getline(cin,str);
        length(str);
	}

	return 0;
}

