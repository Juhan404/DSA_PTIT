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

int dp[105], n, ins, del, cop;

void run_case() {
    cin >> n >> ins >> del >> cop;

    dp[1] = ins;

    FOR(i, 1, n) {
        dp[i] = dp[i - 1] + ins;

        if (i & 1)
            dp[i] = min(dp[i], dp[(i + 1) >> 1] + cop + del);
        else
            dp[i] = min(dp[i], dp[i >> 1] + cop);
    }

    cout << dp[n] << endl;
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