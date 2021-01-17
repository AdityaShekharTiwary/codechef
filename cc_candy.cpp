#include <bits/stdc++.h>
#define ll long long int
#define MAX_VAL 2^31-1
#define vll vector<ll>
#define v vector<int>
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(int i=s;i<e;i++)
#define m map<int,int>
#define mll map<ll,ll>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","r",stdout);
	#endif
	fast
	test
	{
		int a,b,i=1; cin>>a>>b;
	    int bob=0, limak=0;
	    while(1){
	        if(bob>a){
	            cout << "Bob" << endl;
	            break;
	        }
	        bob+=i;
	        i+=1;
	        if(limak> b){
	            cout << "Limak" << endl;
	            break;
	        }
	        limak+=i;
	        i+=1;
	    }
	}

	
}
