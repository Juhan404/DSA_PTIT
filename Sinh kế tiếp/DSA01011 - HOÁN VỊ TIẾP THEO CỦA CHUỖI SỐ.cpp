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

int stt, n;
string x;
bool final = false;

void sinh() {
	int i = n - 1;
	while (i >= 1 && x[i] >= x[i + 1])
		--i;
	if (i == 0) final = true;
	else {
		int j = n;
		while (x[j] <= x[i])
			--j;
		swap(x[i], x[j]);
		reverse(x.begin() + i + 1, x.end());
	}
}

void run_case() {
	cin >> stt >> x;
	n = sz(x);
	x = "#" + x;

	sinh();

	if (final) cout << "BIGGEST";
	else FOR(i, 1, n) cout << x[i];
	cout << '\n';

	final = false;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
#ifdef EmHoang666
	freopen("Error.txt", "w", stderr);
#endif

	int Testcase = 1;
	cin >> Testcase;

	FOR(Test, 1, Testcase) {
		cout << Test << " ";
		run_case();
	}
	return 0;
}