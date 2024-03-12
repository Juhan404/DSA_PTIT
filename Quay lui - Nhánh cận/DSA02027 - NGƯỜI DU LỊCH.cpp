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

int c[20][20], x[20], vs[20], n, res, sum;

void back_tracking(int i) {
    if (sum > res)
        return;

    FOR(j, 2, n) {
        if (!vs[j]) {
            vs[j] = 1;
            x[i] = j;
            sum += c[x[i - 1]][j];

            if (i == n)
                res = min(res, sum + c[x[n]][1]);
            else
                back_tracking(i + 1);

            sum -= c[x[i - 1]][j];
            vs[j] = 0;
        }
    }
}

void run_case() {
    res = 1e9;
    sum = 0;
    x[1] = 1;

    cin >> n;
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            cin >> c[i][j];
        }
    }

    back_tracking(2);

    cout << res << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}