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



void solve()
{
	char mat[3][3];
	int x = 0, o = 0, flagx = 0, flago = 0, u = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 'X') x++;
			else if (mat[i][j] == 'O') o++;
			else if (mat[i][j] == '_') u++;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (mat[i][0] == mat[i][1] && mat[i][2] == mat[i][1]) { //Checking rows
			if (mat[i][0] == 'X') flagx++;
			else if (mat[i][0] == 'O') flago++;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (mat[0][i] == mat[1][i] && mat[2][i] == mat[1][i]) { //Checking columns
			if (mat[0][i] == 'X')flagx++;
			else if (mat[0][i] == 'O')flago++;
		}
	}

	if (mat[0][0] == mat[1][1] && mat[2][2] == mat[1][1]) { //Checking top left diagnol
		if (mat[1][1] == 'X') flagx++;
		else if (mat[1][1] == 'O') flago++;
	}

	if (mat[0][2] == mat[1][1] && mat[2][0] == mat[1][1]) { //Checking top right diagnol
		if (mat[1][1] == 'X')flagx++;
		else if (mat[1][1] == 'O')flago++;
	}

	if (o > x) cout << 3 << endl;
	else if (x - o > 1) cout << 3 << endl;
	else if ((x > o) && flagx == 1 && flago == 0) {
		cout << 1 << endl;
	}
	else if ((x == o) && flago == 1 && flagx == 0) {
		cout << 1 << endl;
	}
	else if (u == 0 && (flagx + flago == 0)) cout << 1 << endl;
	else if (u == 0 and flagx == 2) {
		cout << 1 << endl;
	}
	else if (u > 0 && (flagx + flago == 0)) {
		cout << 2 << endl;
	}
	else cout << 3 << endl;
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
