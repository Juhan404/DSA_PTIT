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
	ll n, m, p;
	cin >> n >> m >> p;

	ll a[n + 1], b[m + 1], c[p + 1];

	FOR(i, 1, n) cin >> a[i];
	FOR(i, 1, m) cin >> b[i];
	FOR(i, 1, p) cin >> c[i];

	int i = 1, j = 1, k = 1;
	bool check = false;

	while (i <= n && j <= m && k <= p) {
		if (a[i] == b[j] && b[j] == c[k]) {
			check = true;
			cout << a[i] << ' ';
			++i, ++j, ++k;
		}
		else if (a[i] < b[j]) ++i;
		else if (b[j] < c[k]) ++j;
		else ++k;
	}

	if (!check) cout << -1;
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