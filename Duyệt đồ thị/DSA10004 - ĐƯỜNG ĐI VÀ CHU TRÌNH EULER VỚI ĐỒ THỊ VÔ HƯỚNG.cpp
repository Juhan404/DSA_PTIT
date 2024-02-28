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

    vector<int> near[n + 1];

    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;

        near[u].pb(v);
        near[v].pb(u);
    }

    int odd = 0, even = 0;

    FOR(i, 1, n) {
        if (sz(near[i]) && sz(near[i]) & 1)
            ++odd;
        else if (sz(near[i]) && sz(near[i]) % 2 == 0)
            ++even;
    }

    if (even == n)
        cout << 2;
    else if (odd == 2)
        cout << 1;
    else
        cout << 0;
    cout << endl;
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