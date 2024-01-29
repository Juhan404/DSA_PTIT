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
	ll n;
	cin >> n;

	ll a[n + 1];
	FOR(i, 1, n) {
		cin >> a[i];
		a[i] *= a[i];
	}

	sort(a + 1, a + n + 1);

	FOR(i, 1, n - 2) {
		FOR(j, i + 1, n - 1) {
			if (binary_search(a + j + 1, a + n + 1, a[i] + a[j])) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";
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