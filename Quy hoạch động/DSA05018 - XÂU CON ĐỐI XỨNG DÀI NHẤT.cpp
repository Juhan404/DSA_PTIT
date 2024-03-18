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

string s;
int dp[1005][1005];

void run_case() {
    memset(dp, 0, sizeof(dp));
    cin >> s;
    int n = sz(s);
    s = " " + s;
    FOR(i, 1, n) {
        dp[i][i] = 1;
    }

    int res = 1;

    FOR(i, 2, n) {
        FOR(l, 1, n - i + 1) {
            int r = l + i - 1;

            if (s[l] == s[r]) {
                if (i == 2)
                    dp[l][r] = 1;
                else
                    dp[l][r] = dp[l + 1][r - 1];
            }

            if (dp[l][r])
                res = max(res, i);
        }
    }

    cout << res << endl;
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