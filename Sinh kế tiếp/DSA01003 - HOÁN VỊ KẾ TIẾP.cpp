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
int a[1005];
bool final = false;

void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
		--i;
	if (i == 0) {
		final = true;
	}
	else {
		int j = n;
		while (a[j] < a[i])
			--j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n);
	}
}

void run_case() {
	cin >> n;
	FOR(i, 1, n) cin >> a[i];

	sinh();

	if (final) ROF(i, n, 1) cout << a[i] << ' ';
	else FOR(i, 1, n) cout << a[i] << ' ';
	cout << '\n';

	final = false;
	memset(a, 0, sizeof(a));
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