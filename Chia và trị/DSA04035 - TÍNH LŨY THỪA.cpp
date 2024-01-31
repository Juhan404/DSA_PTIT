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

ll powmod(ll a, ll b) {
	if (b == 0) return 1;
	ll res = powmod(a, b / 2) % MOD;
	if (b & 1) return (((res * res) % MOD) * a) % MOD;
	else return (res * res) % MOD;
}

void run_case() {
	ll a, b;
	while (true) {
		cin >> a >> b;
		if (!a && !b) return;
		else cout << powmod(a, b) << endl;
	}
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