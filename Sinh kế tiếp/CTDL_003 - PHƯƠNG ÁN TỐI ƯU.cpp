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

int n, v;
vector<int> weight;
vector<int> value;
vector<vector<int>> dp;
string res;

void trace(int i, int j) {
    if (i == 0)
        return;

    if (dp[i][j] == dp[i - 1][j])
        trace(i - 1, j);
    else {
        trace(i - 1, j - weight[i]);
        res[i - 1] = '1';
    }
}

void run_case() {
    cin >> n >> v;

    weight.resize(n + 1);
    value.resize(n + 1);
    res.resize(n, '0');
    dp.resize(n + 1, vector<int>(v + 1, 0));

    FOR(i, 1, n) {
        cin >> value[i];
    }
    FOR(i, 1, n) {
        cin >> weight[i];
    }

    FOR(i, 1, n) {
        FOR(j, 1, v) {
            dp[i][j] = dp[i - 1][j];

            if (j >= weight[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
        }
    }

    cout << dp[n][v] << endl;

    trace(n, v);

    for (char c : res)
        cout << c << ' ';
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