#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int) (x).size()
#define pb push_back
#define endl '\n'
#define fi first
#define se second

#ifdef Juhan404
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair <int, int>;

const ll INF = 1e9 + 69;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

void run_case() {
	int n;
	cin >> n;

	int num_4 = -1, num_7 = -1;

	FOR(y, 0, n / 4) {
		int x = (n - y * 4) / 7;

		if (7 * x + 4 * y == n) {
			num_7 = x;
			num_4 = y;

			break;
		}
	}

	if (num_4 == -1 || num_7 == -1) cout << -1;
	else {
		while (num_4--) cout << 4;
		while (num_7--) cout << 7;
	}
	cout << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	cin >> test;

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}