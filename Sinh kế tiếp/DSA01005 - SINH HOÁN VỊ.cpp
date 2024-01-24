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

int x[15], n;
bool final = false;

void sinh() {
	int i = n - 1;
	while (i >= 1 && x[i] > x[i + 1]) --i;

	if (i == 0) final = true;
	else {
		int j = n;
		while (j >= 1 && x[j] < x[i]) --j;

		swap(x[i], x[j]);
		reverse(x + i + 1, x + n + 1);
	}
}

void run_case() {
	cin >> n;
	FOR(i, 1, n) x[i] = i;

	while (!final) {
		FOR(i, 1, n) cout << x[i];
		cout << ' ';

		sinh();
	}
	cout << endl;

	memset(x, 0, sizeof(x));
	final = false;
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