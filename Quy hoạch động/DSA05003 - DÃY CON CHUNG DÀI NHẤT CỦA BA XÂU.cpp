#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (auto i = (a); i >= (b); --i)
#define sz(x) (int)(x).size()
#define pb push_back
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
    int n, m, p;
    cin >> n >> m >> p;

    string a, b, c;
    cin >> a >> b >> c;

    a = '!' + a;
    b = '!' + b;
    c = '!' + c;

    int f[n + 1][m + 1][p + 1];
    memset(f, 0, sizeof(f));

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            FOR(k, 1, p) {
                if (a[i] == b[j] && b[j] == c[k])
                    f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                else
                    f[i][j][k] = max({f[i - 1][j][k], f[i][j - 1][k], f[i][j][k - 1]});
            }
        }
    }

    cout << f[n][m][p] << endl;
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