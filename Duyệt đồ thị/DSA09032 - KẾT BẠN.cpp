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

int n, m, res = 0, cnt = 0;
vector<int> near[N];
int vis[N];

void input() {
    cin >> n >> m;
    FOR(i, 1, m) {
        int u, v;
        cin >> u >> v;

        near[u].pb(v);
        near[v].pb(u);
    }
}

void reset() {
    res = 0;
    cnt = 0;

    FOR(i, 1, n) {
        near[i].clear();
        vis[i] = 0;
    }
}

void DFS(int u) {
    vis[u] = 1;
    for (int v : near[u]) {
        if (!vis[v]) {
            ++cnt;
            DFS(v);
        }
    }
}

void run_case() {
    input();

    FOR(i, 1, n) {
        if (!vis[i]) {
            cnt = 1;
            DFS(i);
            res = max(res, cnt);
        }
    }

    cout << res << endl;

    reset();
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