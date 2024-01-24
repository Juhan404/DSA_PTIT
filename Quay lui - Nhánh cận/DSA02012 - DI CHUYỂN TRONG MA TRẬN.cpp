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

int a[15][15];
int n, m;
int dx[2] = {0, 1};
int dy[2] = {1, 0};
int cnt = 0;

void BFS(int i, int j) {
	if (i == n && j == m) {
		++cnt;
		return;
	}
	FOR(k, 0, 1) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if (i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m)
			BFS(i1, j1);
	}
}

void run_case() {
	cin >> n >> m;
	FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];

	BFS(1, 1);

	cout << cnt << endl;
	cnt = 0;
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