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

	int a[n + 1][n + 1];
	memset(a, 0, sizeof(a));
	FOR(i, 1, n) cin >> a[1][i];

	FOR(i, 2, n) {
		FOR(j, 1, n) {
			a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
		}
	}

	FOR(i, 1, n) {
		cout << '[';
		FOR(j, 1, n - i + 1) {
			cout << a[i][j];
			if (j != n - i + 1) cout << ' ';
		}
		cout << ']' << endl;
	}
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