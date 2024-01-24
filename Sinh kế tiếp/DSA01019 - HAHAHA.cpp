#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define sz(x) (int) (x).size()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define fi first
#define se second

#ifdef EmHoang666
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair <int, int>;

const int INF = 2e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
multiset <string> mse;

void backtrack(int i, string s) {
	if (i == n - 1) {
		mse.insert(s + "A");
		return;
	}
	if (s[i - 1] == 'H') backtrack(i + 1, s + "A");
	else {
		backtrack(i + 1, s + "H");
		backtrack(i + 1, s + "A");
	}
}

void run_case() {
	cin >> n;

	backtrack(1, "H");

	for (string s : mse)
		cout << s << '\n';

	mse.clear();
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
#ifdef EmHoang666
	freopen("Error.txt", "w", stderr);
#endif

	int Testcase = 1;
	cin >> Testcase;

	FOR(Test, 1, Testcase) {
		// cout << "Case #" << Test << ": ";
		run_case();
	}
	return 0;
}