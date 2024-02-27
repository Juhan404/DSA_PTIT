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

ll n, k, F[93], X[93];

void prepare() {
    F[0] = 1, F[1] = 1;
    FOR(i, 2, 92) {
        F[i] = F[i - 1] + F[i - 2];
    }
    X[0] = 1, X[1] = 0;
    FOR(i, 2, 92) {
        X[i] = X[i - 1] + X[i - 2];
    }
}

int find(ll n, ll k) {
    if (n == 0 || n == 1)
        return X[n];

    if (k == F[n - 2])
        return X[n - 2];
    else if (k == F[n - 1])
        return X[n - 1];

    if (k < F[n - 2])
        return find(n - 2, k);
    else
        return X[n - 2] + find(n - 1, k - F[n - 2]);
}

void run_case() {
    cin >> n >> k;

    cout << find(n, k) << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

#ifdef Juhan404
    freopen("Error.txt", "w", stderr);
#endif

    int T = 1;
    cin >> T;

    prepare();

    for (int test = 1; test <= T; ++test) {

        run_case();
    }
    return 0;
}