#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int x, y;
		cin >> x >> y;
		int s = x + y;
		int i;
		for (i = 1; i <= 1550; i++) {
			if (isPrime(s + i)) {
				break;
			}
		}
		cout << i << "\n";
	}
	return 0;
}
