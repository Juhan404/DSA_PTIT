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

string a[31];
int n, k, x[31], dem = 1;
bool final = false;

void sinh() {
	int i = k;
	while (i >= 1 && x[i] == dem - k + i) --i;

	if (i == 0) final = true;
	else {
		++x[i];
		FOR(j, i + 1, k) x[j] = x[j - 1] + 1;
	}
}

void run_case() {
	cin >> n >> k;
	set <string> se;
	FOR(i, 1, n) {
		string s;
		cin >> s;
		if (!se.count(s)) {
			se.insert(s);
		}
	}
	for (string s : se) {
		a[dem++] = s;
	}
	--dem;

	if (dem < k) return;

	FOR(i, 1, k) x[i] = i;

	while (!final) {
		FOR(i, 1, k) cout << a[x[i]] << ' ';
		cout << endl;

		sinh();
	}
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