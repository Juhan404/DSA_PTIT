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

struct matrix {
    ll data[3][3];

    friend matrix operator*(matrix a, matrix b) {
        matrix c;
        FOR(i, 1, 2) {
            FOR(j, 1, 2) {
                c.data[i][j] = 0;
                FOR(k, 1, 2) {
                    c.data[i][j] += a.data[i][k] * b.data[k][j];
                    c.data[i][j] %= MOD;
                }
            }
        }
        return c;
    }
};

matrix powmod(matrix a, ll b) {
    if (b == 1)
        return a;

    matrix res = powmod(a, b / 2);

    if (b & 1)
        return res * res * a;
    else
        return res * res;
}

void run_case() {
    ll n;
    cin >> n;

    matrix res;

    res.data[1][1] = 1;
    res.data[1][2] = 1;
    res.data[2][1] = 1;
    res.data[2][2] = 0;

    res = powmod(res, n);

    cout << res.data[1][2] << endl;
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