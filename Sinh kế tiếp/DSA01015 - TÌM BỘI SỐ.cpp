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

vector <ll> dat09;

void backtrack(int t, string s) {
	if (sz(s) == t) dat09.pb(stoll(s));
	else {
		backtrack(t, s + '0');
		backtrack(t, s + '9');
	}
}

void run_case() {
	int n;
	cin >> n;

	for (ll x : dat09) {
		if (x != 0 && x % n == 0) {
			cout << x << endl;
			return;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);

#ifdef Juhan404
	freopen("Error.txt", "w", stderr);
#endif

	int test = 1;
	cin >> test;

	FOR(i, 1, 13) backtrack(i, "");

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}