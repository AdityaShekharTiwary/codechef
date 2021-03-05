#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define fo(i,s,e) for(int i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO
	cout.tie(NULL);
}

int help(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

void solve()
{
	int n,k; cin>>n>>k;
	vector<int> v(n);
	for(int &i:v) cin>>i;
	
	for(int i=0;i<k-1;i++)
		cout<<v[i]<<" ";
	
	for(int i=k-1;i<n;i+=2*k){
		
		cout<<v[i]<<" ";
		
		if(i+1<n)
			cout<<v[i+1]<<" ";
	}
	
	cout<<"\n";
}



int main()
{
	fast();

	test
	{
		solve();
	}

	return 0;
}
