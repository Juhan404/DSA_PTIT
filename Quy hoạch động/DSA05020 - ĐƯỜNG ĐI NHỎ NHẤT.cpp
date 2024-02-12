#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define fi first
#define se second

#ifdef Juhan404
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

void run_case() {
    int n, m;
    cin >> n >> m;

    int a[n + 5][m + 5];
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> f(n + 5, vector<int>(m + 5, 1e9));
    f[0][0] = 0;

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + a[i][j];
        }
    }

    cout << f[n][m] << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    for (int test = 1; test <= T; test++) {

        run_case();
    }
    return 0;
}