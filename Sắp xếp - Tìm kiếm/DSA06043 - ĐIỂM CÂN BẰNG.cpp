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

	int a[n + 1], xuoi[n + 1], ngc[n + 1];

	FOR(i, 1, n) {
		cin >> a[i];

		if (i == 1) xuoi[i] = a[i];
		else xuoi[i] = xuoi[i - 1] + a[i];
	}

	ngc[n] = a[n];
	ROF(i, n - 1, 1) {
		ngc[i] = ngc[i + 1] + a[i];
	}

	FOR(i, 1, n) {
		if (xuoi[i - 1] == ngc[i + 1]) {
			cout << i << endl;
			return;
		}
	}

	cout << "-1\n";
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