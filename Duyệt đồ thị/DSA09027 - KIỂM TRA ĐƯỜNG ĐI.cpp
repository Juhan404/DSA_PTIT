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

vector <int> ke[1005];
int n, m, q, cur_tplt = 0;
bool visited[1005];
int tplt[1005];

void nhap() {
	cin >> n >> m;

	memset(visited, false, sizeof(visited));
	FOR(i, 1, n) ke[i].clear();
	cur_tplt = 0;

	FOR(i, 1, m) {
		int x, y;
		cin >> x >> y;

		ke[x].pb(y);
		ke[y].pb(x);
	}
}

void DFS(int u) {
	visited[u] = true;
	tplt[u] = cur_tplt;

	for (int x : ke[u]) {
		if (!visited[x])
			DFS(x);
	}
}

void run_case() {
	nhap();

	FOR(i, 1, n) {
		if (!visited[i]) {
			++cur_tplt;
			DFS(i);
		}
	}

	cin >> q;

	FOR(i, 1, q) {
		int x, y;
		cin >> x >> y;

		if (tplt[x] != tplt[y]) cout << "NO\n";
		else cout << "YES\n";
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