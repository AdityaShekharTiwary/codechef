#include <bits/stdc++.h>
using namespace std;
using ll=long long int ;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
      int n;
      cin >> n;
      vector<int> v1(n), v2(n);
      for (auto &x : v1) 
      cin >> x;
     
      for (auto &x : v2) 
      cin >> x;
   
      map<int, int> pos ,posTrack;;
   
      for (int i = 0; i < n; ++i) 
      pos[v1[i] - 1] = i;
    
      for (int i = 0; i < n; ++i) 
      posTrack[v1[i] - 1] = v2[i];
   
      int ans = 0;
      for (int i = 1; i < n; ++i) {
        while (pos[i] <= pos[i - 1]) {
            pos[i] += posTrack[i];
            ans++;
        }
      }
     
     cout << ans << endl;
    }
    return 0;
}