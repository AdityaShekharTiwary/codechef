#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define mi map<int,int>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;



void sieve(vi &arr,int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 	
 	prime[0]=false;
 	prime[1]=false;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int count=0;
    for (int p = 2; p <= n; p++){
        if (prime[p])
        	count++;
            arr.pb(count);
    }
}


int solve(vi &arr,int x){
	int l=0,r=1000000;
	while(r>=l){
		int mid=l+(r-l)/2;
		if(arr[mid]==x) return mid;
		else if(arr[mid]>x)  r=mid-1;
		else l=mid+1;
	}
	return l;
}


int main()
{
	//Input Output

	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	// Code starts

	fast_IO

	vi arr;
	sieve(arr,1000000);
	

	test
	{
		int x,y; cin>>x>>y;
		//int idx=solve(arr,x);
		(arr[x-1]<=y?printf("Chef\n"):printf("Divyam\n"));

	}

	return 0;
}
