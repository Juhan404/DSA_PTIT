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

int a[15][15], n;
bool check = false;

void backtrack(int i, int j, string s) {
	if (i == n && j == n) {
		check = true;
		cout << s << ' ';
		return;
	}
	if (a[i + 1][j]) backtrack(i + 1, j, s + "D");
	if (a[i][j + 1]) backtrack(i, j +  1, s + "R");
}

void run_case() {
	cin >> n;
	FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];

	if (a[1][1] == 0 || a[n][n] == 0) {
		cout << -1 << endl;
		return;
	}

	backtrack(1, 1, "");

	if (check == false) {
		cout << -1 << endl;
		return;
	}
	check = false;
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