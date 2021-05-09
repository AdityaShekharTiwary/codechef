#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

void fast()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
#endif

	fast_IO
	cout.tie(NULL);
}

void nextPermutation(vector<int>& nums) {
	int n = nums.size(), k, l;

	for (k = n - 2; k >= 0; k--) {
		if (nums[k] < nums[k + 1]) break;
	}

	if (k < 0) reverse(nums.begin(), nums.end());
	else {
		for (l = n - 1; l > k; l--) {
			if (nums[l] > nums[k]) break;
		}
		swap(nums[k], nums[l]);
		reverse(nums.begin() + k + 1, nums.end());
	}
}

void solve()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> nums(n);
		for (int i = 0; i < n; i++) cin >> nums[i];
		nextPermutation(nums);
		for (auto i : nums) cout << i;
		cout << endl;
	}
}


int main()
{
	fast();

	//test
	{
		solve();
	}

	return 0;
}
