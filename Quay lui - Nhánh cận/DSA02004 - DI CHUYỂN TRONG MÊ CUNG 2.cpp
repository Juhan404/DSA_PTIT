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

int n, a[10][10];
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };
vector <string> v;
string s;

void loang(int i, int j) {
	if (i == n && j == n) {
		v.pb(s);
		s.pop_back();
		return;
	}

	a[i][j] = 0;

	FOR(k, 0, 3) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if (a[i1][j1] && i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n) {
			if (k == 0) s += 'U';
			else if (k == 1) s += 'L';
			else if (k == 2) s += 'R';
			else s += 'D';

			loang(i1, j1);
		}
	}

	a[i][j] = 1;
	s.pop_back();
}

void run_case() {
	cin >> n;
	FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];

	loang(1, 1);

	if (sz(v) == 0) {
		cout << -1 << endl;
		s.clear();
		return;
	}

	sort(v.begin(), v.end());

	for (string x : v) cout << x << ' ';
	cout << endl;

	v.clear();
	s.clear();
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