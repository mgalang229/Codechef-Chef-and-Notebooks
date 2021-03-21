#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, k, n;
		cin >> x >> y >> k >> n;
		vector<int> p(n), c(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i] >> c[i];
		}
		bool checker = false;
		for (int i = 0; i < n; i++) {
			// check if the sum of the available pages and the no. of
			// pages of the i-th notebook is greater than or equal to
			// 'x', and check if 'c[i]' (price of the notebook) is less
			// than or equal to 'k' (the money of Chef)
			if (p[i] + y >= x && c[i] <= k) {
				checker = true;
				// if it's true, then break the loop
				break;
			}
		}
		cout << (checker ? "LuckyChef" : "UnluckyChef") << '\n';
	}
	return 0;
}
