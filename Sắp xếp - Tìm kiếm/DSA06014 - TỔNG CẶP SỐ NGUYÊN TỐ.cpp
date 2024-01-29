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

bool prime[MAXN];

void sang() {
	FOR(i, 2, MAXN - 1) prime[i] = true;
	FOR(i, 2, sqrt(MAXN)) {
		if (prime[i]) {
			for (int j = i * i; j < MAXN; j += i) {
				prime[j] = false;
			}
		}
	}
}

void run_case() {
	int n;
	cin >> n;

	FOR(i, 2, n / 2) {
		if (prime[i] && prime[n - i]) {
			cout << i << ' ' << n - i << endl;
			return;
		}
	}

	cout << -1 << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	cin >> test;

	sang();

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}