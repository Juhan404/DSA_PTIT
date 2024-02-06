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

	priority_queue <ll, vector <ll>, greater <ll>> pq;

	FOR(i, 1, n) {
		ll x;
		cin >> x;

		pq.push(x);
	}

	ll res = 0;

	while (pq.size() > 1) {
		ll x = pq.top(); pq.pop();
		ll y = pq.top(); pq.pop();

		ll tong = x + y;
		tong %= MOD;

		res += tong;
		res %= MOD;

		pq.push(tong);
	}

	cout << res << endl;
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