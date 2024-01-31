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

int n, k;
vector <string> v;

bool check(string s) {
	int cnt = 0, max_cnt = 0;
	for (char c : s) {
		if (c == 'A') ++cnt;
		else cnt = 0;

		max_cnt = max(max_cnt, cnt);
	}
	if (max_cnt != k) return false;

	int fre = 0;
	for (char c : s) {
		if (c == 'A') ++cnt;
		else cnt = 0;

		if (cnt == max_cnt) ++fre;
	}
	if (fre > 1) return false;
	else return true;
}

void backtrack(string s) {
	if (sz(s) == n) {
		if (check(s + '@')) v.pb(s);
		return;
	}
	FOR(i, 'A', 'B') backtrack(s + i);
}

void run_case() {
	cin >> n >> k;

	backtrack("");

	cout << sz(v) << endl;
	for (string s : v) cout << s << endl;
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