#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
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

void solve()
{
	
}

int main()
{
	fast();

	ll t,q,d;
	while(t--){
		ll lx=(-1ll)*1e18,rx=1e18,ly=lx,ry=rx;
		lx--;
		rx++;
		ly--;
		ry++;
		ll curr=1;
		string cc;
		ll z=-1;
		while(true){
			if(curr==1){
				if(rx>=(lx+2) && ry>=(ly+2)){
					ll midx=(rx+lx)/2;
					ll midy(ry+ly)/2;
					cout<<curr<<" "<<midx<<" "<<midy<<endl;
					cin>>cc;
					if(cc.compare('O')==0 || cc.compare("FAILED")==0) break;
					if(cc[0]=='X'){
						lx=midx-1;
						rx=midx+1;
					}
					else if(cc[0]=='P'){
						if(d==0) rx=midx-1;
						else{
							lx=midx;
							lx--;
						}
					}
					else{
						if(a==0) lx=midx+1;
						else{
							lx=midx;
							rx++;
						}
					}
					if(cc[1]=='Y'){
						ly=midy-1;
						ry=midy+1;
					}
					else if(cc[1]=='P'){
						if(d==0) ry=midy-1;
						else{
							ry=midy;
							ly--;
						}
					}
					else {
						if(d==0) ly=midy;+1;
						else {
							ly=midy;
							ry++;
						}
					}
					if(d==0){
						// foishfncoikhc
					}
					else{
						if(rx<=(lx+3)&&ry<=(ly+3)) curr=2;
					}

				}
				else {
					curr=2;
					cout<<curr<<" "<<lx<<" "<<ly<<" "<<rx<<" "<<ry<<endl;
					cin>>cc;
					break;
				}
				else {
					if(rx==(lx+3)&&(ry==(ly+3))){
						cout<<curr<<" "<<lx<<" "<<ly<<" "<<lx+2<<" "<<ry<<endl;
						cin>>cc;
						if(cc.compare("O")==0) break;
						else if(cc.compare"IN"==0) rx=lx+2;
						else {
							lx=lx+2;
							rx++;
						}
					}
					if(rx==(lx+2)&&(ry==(ly+3))){
						cout<<curr<<" "<<lx<<" "<<ly<<" "<rx<<" "<<ly+2<<endl;
						cin>>cc;
						if(cc.compare("O")==0){

						}
						else if(cc.compare("IN")==0){
							cout<<curr<<" "<<lx<<" "<<ly<<" "<<lx+2<<" "<<ry<<endl;
							cin>cc;
						}
						else{
							cout<<curr<<" "<<lx+2<<" "ly<<" "<<lx+4<<" "<<ry<<endl;
							cin>>cc;
						}
						break;
					}
					else{
						cout<<curr<<" "<<lx<<" "<<ly<<" "<<rx<<" "<<ry<<endl;
						cin>>cc;
						break;
					}
				}
				cout.flush();

			}
			cout.flush();
		}
	}


	return 0;
}
