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

ll n, k;

struct matran {
	ll matrix[15][15];

	friend matran operator * (matran a, matran b) {
		matran res;
		FOR(i, 1, n) {
			FOR(j, 1, n) {
				res.matrix[i][j] = 0;
				FOR(k, 1, n) {
					res.matrix[i][j] += a.matrix[i][k] * b.matrix[k][j];
					res.matrix[i][j] %= MOD;
				}
			}
		}
		return res;
	}
};

matran powmod(matran a, ll b) {
	if (b == 1) return a;
	matran res = powmod(a, b / 2);
	if (b & 1) return res * res * a;
	else return res * res;
}

void run_case() {
	cin >> n >> k;

	matran a;
	FOR(i, 1, n) FOR(j, 1, n) cin >> a.matrix[i][j];

	a = powmod(a, k);

	FOR(i, 1, n) {
		FOR(j, 1, n) cout << a.matrix[i][j] << ' ';
		cout << endl;
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