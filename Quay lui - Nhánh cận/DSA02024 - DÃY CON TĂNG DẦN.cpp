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

int n, a[25], x[25];
vector <string> v;

void backtrack(int i, int st) {
	FOR(j, st, n) {
		if (a[j] > x[i - 1]) {
			x[i] = a[j];

			if (i >= 2) {
				string s = "";

				FOR(k, 1, i) s += to_string(x[k]) + " ";

				v.pb(s);
			}
			backtrack(i + 1, j + 1);
		}
	}
}

void run_case() {
	cin >> n;
	FOR(i, 1, n) cin >> a[i];

	backtrack(1, 1);

	sort(v.begin(), v.end());

	for (string x : v) cout << x << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	// cin >> test;

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}