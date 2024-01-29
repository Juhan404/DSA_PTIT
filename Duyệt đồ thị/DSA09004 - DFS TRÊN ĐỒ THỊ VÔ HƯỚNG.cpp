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

int n, m, k;
vector <int> v[1005];
bool visited[1005];

void reset() {
	memset(visited, false, sizeof(visited));
	FOR(i, 1, n) v[i].clear();
}

void nhap() {
	cin >> n >> m >> k;

	reset();

	FOR(i, 1, m) {
		int x, y;
		cin >> x >> y;

		v[x].pb(y);
		v[y].pb(x);
	}

	FOR(i, 1, n) sort(v[i].begin(), v[i].end());
}

void DFS(int u) {
	cout << u << ' ';

	visited[u] = true;

	for (int x : v[u]) {
		if (!visited[x])
			DFS(x);
	}
}

void run_case() {
	nhap();

	DFS(k);

	cout << endl;
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