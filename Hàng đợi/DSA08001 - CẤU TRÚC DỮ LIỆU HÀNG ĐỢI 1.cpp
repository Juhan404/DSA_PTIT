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

	queue <int> q;
	int x;

	FOR(i, 1, n) {
		cin >> x;

		if (x == 3) {
			int y;
			cin >> y;
			q.push(y);
		}
		else if (x == 1) {
			cout << sz(q) << endl;
		}
		else if (x == 2) {
			if (q.empty()) cout << "YES\n";
			else cout << "NO\n";
		}
		else if (x == 4) {
			if (!q.empty()) q.pop();
		}
		else if (x == 5) {
			if (!q.empty()) cout << q.front() << endl;
			else cout << -1 << endl;
		}
		else if (x == 6) {
			if (!q.empty()) cout << q.back() << endl;
			else cout << -1 << endl;
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

	for (int tc = 1; tc <= test; tc++) {
		// cout << "Test #" << tc << ": ";
		run_case();
	}
	return 0;
}