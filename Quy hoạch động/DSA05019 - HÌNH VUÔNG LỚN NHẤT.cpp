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

    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> f(n + 1, vector<int>(m + 1, 0));
    int maxx = 0;

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (a[i][j]) {
                f[i][j] = min({f[i - 1][j - 1], f[i - 1][j], f[i][j - 1]}) + 1;
                maxx = max(maxx, f[i][j]);
            }
        }
    }

    cout << maxx << endl;
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