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

ll dp[1005], n, k, a[1005];

void run_case() {
    memset(dp, 0, sizeof(dp));

    cin >> n >> k;
    FOR(i, 1, n) {
        cin >> a[i];
    }

    dp[0] = 1;

    FOR(i, 1, k) {
        FOR(j, 1, n) {
            if (a[j] <= i)
                dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
        }
    }

    cout << dp[k] << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}