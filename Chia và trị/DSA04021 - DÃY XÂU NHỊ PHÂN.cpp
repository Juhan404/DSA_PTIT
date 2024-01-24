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

ll fibo[93];

void prep() {
	fibo[1] = fibo[2] = 1;
	FOR(i, 3, 93) fibo[i] = fibo[i - 2] + fibo[i - 1];
}

int xaufibo(ll n, ll k) {
	if (n == 1) return 0;
	else if (n == 2) return 1;
	if (k <= fibo[n - 2]) return xaufibo(n - 2, k);
	else return xaufibo(n - 1, k - fibo[n - 2]);
}

void run_case() {
	ll n, k;
	cin >> n >> k;

	cout << xaufibo(n, k) << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	cin >> test;

	prep();

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}