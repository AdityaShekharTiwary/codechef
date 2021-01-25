#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define v vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void SieveOfEratosthenes(vector<int> &arr,int x)
{
    bool prime[x + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= x; p++){
        if (prime[p] == true){
            for (int i = p * p; i <= x; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= x; p++)
        if (prime[p])
            arr.push_back(p);
}
int main()
{
	fast
	vector<int>arr;
	int x=1000000;
    SieveOfEratosthenes(arr,x);
	test
	{
        int n,count=0;cin>>n;
        for(int i=0;i<n;i++){
            if(arr[i]+2==arr[i+1] && arr[i+1]<=n) {
                count++;
                if(arr[i+1]==n) break;
        }
        }
        cout<<count<<endl;
	}
	return 0;
}

