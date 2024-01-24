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
	string s;
	cin >> s;

	for (char &c : s) {
		if (c == '1') c = '0';
		else c = '1';
	}

	int i = sz(s) - 1;
	while (i >= 0 && s[i] == '1') --i;

	if (i >= 0) {
		s[i] = '1';
		++i;

		while (i < sz(s)) {
			s[i] = '0';
			++i;
		}
	}
	else {
		cout << s << endl;
		return;
	}

	for (char c : s) {
		if (c == '1') cout << 0;
		else cout << 1;
	}

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